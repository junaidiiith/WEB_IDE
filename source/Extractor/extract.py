#!/usr/bin/python
import re

# Open a file containning paths of all headers
path_headers = open("all_headers_c++")

for header_path in path_headers.readlines():
    # Open a header file and store its content in a string
    #print header_path
    try:
        current_header = header_path[:-1]
        library_name = current_header.split('/')[-1]
        # create a file containing data of currently processing library
        data_file = "libraries/" + library_name

        file_opener = open(current_header)
        content = file_opener.read()
        file_opener.close()
    except:
        #print "File doesn't exits"
        continue
    
    # extract functional signature from content
    headers = re.findall(r"extern[\w\s*,().]*", content)
    
    def filter_args(argument):
        if len(argument) <= 0:
            return False
        else:
            return True

    def truncate_header(bad_header):
        """Replace all whilspaces with single space."""
        good_header = re.sub("[\s]+", " ", bad_header)
        return good_header
    
    def get_args(parameters):
        """ Parsing arguments of a function """
        args = ""
        brackets = 0
        for char in parameters:
            if char == '(':
                brackets += 1
            elif char == ')':
                brackets -= 1
            args += char
            if brackets == 0:
                break
        return args

    #totalMethod = 0
    allMethods = []
    for header in headers:
        header = truncate_header(header)
        components = header.split()
        try:
            params = re.search("\(.*\)", header).group()
            args = get_args(params)
            #print args
            methodName = components[2]
            returnValue = components[1]
            # Removing '*' and appending it to return_value
            if methodName.find("*") > -1:
                returnValue += "*"
                methodName = methodName.replace("*", "")
            allMethods.append(
                    str(
                    "{" + "\n" +
                        "  " + "\"method_name\"" + " : \"" + methodName + "\",\n" +
                        "  " + "\"return_value\"" + " : \"" + returnValue + "\",\n" +
                        "  " + "\"arguments\"" + " : \"" + args[1:-1] + "\"\n" +
                    "}"
                    )
            )
            #totalMethod += 1
        except:
            pass
     
    methodLen = len(allMethods)
    if methodLen == 0:
        continue

    data = "["
    methodNo = 0
    for method in allMethods:
        methodNo += 1
        data += method
        if methodNo != methodLen:
            data += ",\n"
    data += "]"

    header_method = open(data_file,"w")
    header_method.write(data)

    #print data
