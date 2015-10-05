from django.db import models

# Create your models here.
class table(models.Model):
	class_name=models.CharField(max_length=1000)
	return_type=models.CharField(max_length=1000)
	parameters=models.CharField(max_length=1000)
