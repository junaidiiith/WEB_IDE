from django.db import models


class language_table(models.Model):
    language_name = models.CharField(max_length=50)
    language_id = models.IntegerField(default=0)

class class_table(models.Model):
    class_name = models.CharField(max_length=2000)
    language_id = models.IntegerField(default=0)
    class_id_value = models.IntegerField(default=0)

class data_table(models.Model):
    return_type = models.CharField(max_length=2000)
    method_name = models.CharField(max_length=2000)
    class_id_value = models.IntegerField(default=0)
    language_id = models.IntegerField(default=0)
    arguments = models.CharField(max_length=2000)


