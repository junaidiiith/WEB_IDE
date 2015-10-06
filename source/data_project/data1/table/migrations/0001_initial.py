# -*- coding: utf-8 -*-
from __future__ import unicode_literals

from django.db import models, migrations


class Migration(migrations.Migration):

    dependencies = [
    ]

    operations = [
        migrations.CreateModel(
            name='table',
            fields=[
                ('id', models.AutoField(verbose_name='ID', serialize=False, auto_created=True, primary_key=True)),
                ('class_name', models.CharField(max_length=1000)),
                ('return_type', models.CharField(max_length=1000)),
                ('parameters', models.CharField(max_length=1000)),
            ],
        ),
    ]
