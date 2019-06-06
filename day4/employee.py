#! /usr/bin/env python3
#Lucas Marchesani

class Employee:

    def __init__(self, name, Id, dep, job):
        self.name = name
        self.Id = Id
        self.dep = dep
        self.job = job

#method
    def fulldata(self):
        return 'Name:{},Id: {}, Department{},Job: {}'.format(self.name,self.Id,self.dep,self.job)

#data instance variables    
per1 = Employee('Susan Meyers','45899','Accounting','Vice President')
per2 = Employee('Mark Jones','39119','IT','Programmer')
per3 = Employee('Joy Rogers','81774','Manufacturing','Engineer')


print(per1.fulldata())
print(per2.fulldata())
print(per3.fulldata())