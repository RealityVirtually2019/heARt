from django.shortcuts import render

# Create your views here.
from django.http import HttpResponse


def index(request):
    print(request.image)
    
    return HttpResponse("Hello. You're at the polls index.")
