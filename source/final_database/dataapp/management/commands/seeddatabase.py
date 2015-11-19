from django.core.management.base import BaseCommand, CommandError
import sqlite3
import json

class Command(BaseCommand):
    help = 'Fill the database with the function signatures of C/C++, JAVA and C#'

    def add_arguments(self, parser):
        parser.add_argument('lanaguage_name', nargs='?', type=str)

    def handle(self, *args, **options):
        # Connection to database
        connection = sqlite3.connect('db.sqlite3')
        cursor = connection.cursor()

        if options['lanaguage_name'] == 'c':
            # inserting all libraries in class_table
            all_libs = open('../Extractor/lib_name')
            last_inserted_class_id = 1405
            for lib in all_libs.readlines():
                last_inserted_class_id += 1
                try:
                    lib_name = lib.replace('\n','')
                    tup = (lib_name, 3, last_inserted_class_id)
                    cursor.execute('insert into dataapp_class_table (class_name, language_id, class_id_value) Values(?,?,?)', tup)
                    
                    library_data_file = open('../Extractor/libraries/' + lib_name)
                    library_data = json.loads(library_data_file.read())
                    for function in library_data:
                        func_data = (str(function['return_value']), str(function['method_name']), last_inserted_class_id, 3, str(function['arguments']))
                        cursor.execute('insert into dataapp_data_table (return_type,method_name,class_id_value,language_id,arguments) Values(?,?,?,?,?)', func_data)

                except Exception,e:
                    print str(e)
                finally:
                    connection.commit()
