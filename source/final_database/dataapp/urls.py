from django.conf.urls import url,patterns

from . import views 

urlpatterns = patterns('',
    url(r'^(?P<language_id>[0-9])/(?P<class_list>.*)$',views.getdata,name='getdata'),
    )
