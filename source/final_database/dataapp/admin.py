from django.contrib import admin

# Register your models here.
from dataapp.models import language_table,class_table,data_table
admin.site.register(language_table)
admin.site.register(class_table)
admin.site.register(data_table)
