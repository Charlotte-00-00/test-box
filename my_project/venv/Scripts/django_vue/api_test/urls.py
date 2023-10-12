from django.urls import re_path as url, include
from .views import *

urlpatterns = [
    url(r"add_book$", add_book, ),
    url(r"show_books$", show_books, ),
]


