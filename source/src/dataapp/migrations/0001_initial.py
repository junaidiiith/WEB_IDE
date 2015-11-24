# -*- coding: utf-8 -*-
from __future__ import unicode_literals

from django.db import models, migrations


class Migration(migrations.Migration):

    dependencies = [
    ]

    operations = [
        migrations.CreateModel(
            name='class_table',
            fields=[
                ('id', models.AutoField(verbose_name='ID', serialize=False, auto_created=True, primary_key=True)),
                ('class_name', models.CharField(max_length=2000)),
                ('language_id', models.IntegerField(default=0)),
                ('class_id_value', models.IntegerField(default=0)),
            ],
        ),
        migrations.CreateModel(
            name='data_table',
            fields=[
                ('id', models.AutoField(verbose_name='ID', serialize=False, auto_created=True, primary_key=True)),
                ('return_type', models.CharField(max_length=2000)),
                ('method_name', models.CharField(max_length=2000)),
                ('class_id_value', models.IntegerField(default=0)),
                ('language_id', models.IntegerField(default=0)),
                ('arguments', models.CharField(max_length=2000)),
            ],
        ),
        migrations.CreateModel(
            name='language_table',
            fields=[
                ('id', models.AutoField(verbose_name='ID', serialize=False, auto_created=True, primary_key=True)),
                ('language_name', models.CharField(max_length=50)),
                ('language_id', models.IntegerField(default=0)),
            ],
        ),
    ]
