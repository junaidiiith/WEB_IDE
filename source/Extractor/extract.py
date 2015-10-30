#!/usr/bin/python
import re
import sys

# Open a file containning paths of all headers
path_headers = open("all_headers_c++")

for header_path in path_headers.readlines():
    # Open a header file and store its content in a string
    #print header_path
    try:
        file_opener = open(header_path[:-1])
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
        """Parse all the argument of a function."""
        params = "  \"arguments\" : {\n"
        arguments = parameters[1:-1].split(",")
        argIterLen = len(arguments)
        arg_no = 0
        for args in arguments:
            arg_no += 1
            isPointer = args.find("*")
            args_type = args.split()
            #sys.stdout.write(str(args_type))
            tmp = ""
            args_len = len(args_type)
            if args_len > 0:
                for index in range(args_len):
                    if args_type[index].find("__") == -1:
                        tmp += args_type[index] + " "
                tmp = tmp[:-1]
                if isPointer > -1:
                    tmp += "*"
            else:
                tmp = args_type[0]
            #paramsType.append(tmp)
            if filter_args(tmp) == True:
                if arg_no == argIterLen:
                    params += "\t  " + "\"arg\"" + " : \"" + tmp + "\"\n"
                else:
                    params += "\t  " + "\"arg\"" + " : \"" + tmp + "\",\n"
        params += "  }\n"
        return params
    
    #totalMethod = 0
    allMethods = []
    for header in headers:
        header = truncate_header(header)
        components = header.split()
        try:
            #sys.stdout.write(components[2]+" ")
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
                        args +
                    "}"
                    )
            )
            #totalMethod += 1
        except:
            pass
     
    methodLen = len(allMethods)
    if methodLen == 0:
        continue
    sys.stdout.write("[")
    methodNo = 0
    for method in allMethods:
        methodNo += 1
        sys.stdout.write(method)
        if methodNo != methodLen:
            sys.stdout.write(",\n")
    sys.stdout.write("]\n")
