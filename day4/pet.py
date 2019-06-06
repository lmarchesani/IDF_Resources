#! /usr/bin/env python3
#Lucas Marchesani

class Pet:
    def __init__(self,name,animal_type,age):
        self.__name = name
        self.__animal_type = animal_type
        self.__age = age

    def set_name(self,name):
        self.__name = name
    def set_animal_type(self,animal_type):
        self.__animal_type = animal_type
    def set_age(self,age):
        self.__age = age

    def get_name(self):
        return self.__name
    def get_animal_type(self):
        return self.__animal_type
    def get_age(self):
        return self.__age

def main():
    #how the hell do I change this speed using another class (accel/brake)

    name = input("Enter a name\n")
    animal_type = input("Enter animal type\n")
    age = int(input("Enter animal age\n"))
    if (age<0):
        print("Invalid age")
        exit()

    pet1 = Pet(name,animal_type,age)
    print(pet1.get_name())
    print(pet1.get_age())
    print(pet1.get_animal_type())

main()