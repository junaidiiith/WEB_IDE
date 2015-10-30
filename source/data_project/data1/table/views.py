from django.shortcuts import render
from django.http import HttpResponse
from django.core import serializers
from .models import table

# Create your views here.
def index(request):
    data = serializers.serialize("json",table.objects.all())
    print type(data)
    return HttpResponse(data)

def editor(request):
	return render(request,"editor.html",{})
