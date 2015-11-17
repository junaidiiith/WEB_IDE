from django.conf.urls import url,patterns

from . import views 

urlpatterns = patterns('',
    url(r'^(?P<language_name>[.]{4,})/(?P<class_list>.*)$',views.getdata,name='getdata'),
    )
