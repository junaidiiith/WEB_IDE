"""final URL Configuration

The `urlpatterns` list routes URLs to views. For more information please see:
    https://docs.djangoproject.com/en/1.8/topics/http/urls/
Examples:
Function views
    1. Add an import:  from my_app import views
    2. Add a URL to urlpatterns:  url(r'^$', views.home, name='home')
Class-based views
    1. Add an import:  from other_app.views import Home
    2. Add a URL to urlpatterns:  url(r'^$', Home.as_view(), name='home')
Including another URLconf
    1. Add an import:  from blog import urls as blog_urls
    2. Add a URL to urlpatterns:  url(r'^blog/', include(blog_urls))
"""
from django.conf.urls import include, url
from django.contrib import admin

urlpatterns = [
<<<<<<< HEAD:source/data_project/data1/data1/urls.py
    url(r'^table/', include('table.urls')),
    url(r'^$', 'acelinker.views.index', name='index'),
=======
    url(r'^intellisense/', include('intellisense.urls')),
>>>>>>> 2829a3b5e8bdc7d0e29279a353741052d920c0c7:source/data_project/final/urls.py
    url(r'^admin/', include(admin.site.urls)),
]
