from django.conf.urls import url,patterns

from . import views

urlpatterns = patterns('', 
        url(r'^c_cpp_json/$',views.c_cpp_json,name='c_cpp'),
        url(r'^c_sharp_json/$',views.c_sharp_json,name='c_sharp'),
        url(r'^java_json/$',views.java_json,name='java'),
)
