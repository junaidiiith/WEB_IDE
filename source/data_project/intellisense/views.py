from django.shortcuts import render
from django.http import HttpResponse
from django.core import serializers
from .models import csharp, c, java 

# Create your views here.
def c_cpp_json(request):
    data = serializers.serialize("json",c.objects.all())
    return HttpResponse(data)

def c_sharp_json(request):
    data = serializers.serialize("json",csharp.objects.all())
    return HttpResponse(data)

def java_json(request):
    data = serializers.serialize("json",java.objects.all())
    return HttpResponse(data)
