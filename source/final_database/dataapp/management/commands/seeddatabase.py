from django.core.management.base import BaseCommand, CommandError
import sqlite3
import json
import re

class Command(BaseCommand):
    help = 'Fill the database with the function signatures of C/C++, JAVA and C#'

    def add_arguments(self, parser):
        parser.add_argument('lanaguage_name', nargs='?', type=str)

    def handle(self, *args, **options):
        # Connection to database
        connection = sqlite3.connect('db.sqlite3')
        cursor = connection.cursor()
        lastrowid = cursor.execute("SELECT max(id) FROM dataapp_data_table").fetchone()[0]
        last_inserted_class_id = lastrowid if lastrowid !=None else 0

        # inserting all libraries in class_table
        if options['lanaguage_name'] == 'c':
            # feeding c/c++ data
            print "Inserting c/c++ data in database..."
            all_libs = open('../Extractor/lib_name')
            for lib in all_libs.readlines():
                last_inserted_class_id += 1
                try:
                    lib_name = lib.replace('\n','')
                    tup = (lib_name, 3, last_inserted_class_id)
                    cursor.execute('insert into dataapp_class_table (class_name, language_id, class_id_value) Values(?,?,?)', tup)
                    
                    library_data_file = open('../Extractor/Json_data/c_cpp_libraries/' + lib_name)
                    library_data = json.loads(library_data_file.read())
                    for function in library_data:
                        func_data = (str(function['return_value']), str(function['method_name']), last_inserted_class_id, 3, str(function['arguments']))
                        cursor.execute('insert into dataapp_data_table (return_type,method_name,class_id_value,language_id,arguments) Values(?,?,?,?,?)', func_data)

                except Exception,e:
                    print str(e)
                finally:
                    connection.commit()

        elif options['lanaguage_name'] == 'csharp':
            # feeding c-sharp data
            print "Inserting c# data in database..."
            pattern = re.compile(r"\{.*\}",re.UNICODE)
            #function_file = open('../Extractor/Json_data/csharp_data')
            function_file = open('../Extractor/Json_data/csharp_small_data')
            functions = pattern.findall(function_file.read())
            """
            reader = function_file.read().replace("}\n", "},")
            functions = json.loads("[" + reader[:-1] + "]")
            """
            for function_str in functions:
                function = json.loads(function_str)
                last_inserted_class_id += 1
                try:
                    arguments = ""
                    for param in function['parameters']:
                        arguments += str(param) +","
                    func_data = (str(function['return_type']), str(function['method_name']), last_inserted_class_id, 2, arguments[:-1])
                    cursor.execute('insert into dataapp_data_table (return_type,method_name,class_id_value,language_id,arguments) Values(?,?,?,?,    ?)', func_data)
                except Exception,e:
                    print str(e)
                finally:
                    connection.commit()

        elif options['lanaguage_name'] == 'java':
            # feeding java data
            print "Inserting java data in database..."
            pattern = re.compile(r"\{.*\}",re.UNICODE)
            #function_file = open('../Extractor/Json_data/java_data')
            function_file = open('../Extractor/Json_data/java_small_data')
            functions = pattern.findall(function_file.read())
            """
            reader = function_file.read().replace("}\n", "},")
            functions = json.loads("[" + reader[:-1] + "]")
            """
            for function_str in functions:
                function = json.loads(function_str)
                last_inserted_class_id += 1
                try:
                    arguments = ""
                    for param in function['Arguments_types']:
                        arguments += str(param) +","
                    func_data = (str(function['Return type']), str(function['Method name']), last_inserted_class_id, 1, arguments[:-1])
                    cursor.execute('insert into dataapp_data_table (return_type,method_name,class_id_value,language_id,arguments) Values(?,?,?,?,    ?)', func_data)
                except Exception,e:
                    print str(e)
                finally:
                    connection.commit()
        else:
            print "seeddatabase: missing/invalid argument"
            print "Use 'python manage.py seeddatabase <language_name> [c|csharp|java]'"
