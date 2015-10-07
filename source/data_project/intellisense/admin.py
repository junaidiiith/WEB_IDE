from django.contrib import admin

# Register your models here.
from .models import c,csharp,java

admin.site.register(c)
admin.site.register(java)
admin.site.register(csharp)
