from django.shortcuts import render
from django.http import HttpResponse
from django.core import serializers
from .models import language_table,data_table,class_table

# Create your views here.
def getdata(request,language_name,class_list):
        return HttpResponse (language_name)
        classlist = class_list.split(',')
	classobjectlist = class_table.objects.filter(class_name__in=classlist)
	classidlist = classobjectlist.values_list('class_id_value',flat=True)
	datalist = data_table.objects.filter(class_id_value__in=classidlist,language_id=language_id)
	sterealized_object = serializers.serialize("json",datalist)
	return HttpResponse(sterealized_object)
