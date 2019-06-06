#! /usr/bin/env python3
#Lucas Marchesani

class perInfo:

    def __init__(self, name, address, age, phoneNum):
        self.name = name
        self.address = address
        self.age = age
        self.phoneNum = phoneNum

#method
    def fulldata(self):
        return 'Name:{}, Address: {}, Age{}, Phone Number=: {}'.format(self.name, self.address, self.age, self.phoneNum)


def main():
#data instance variables    
    person1 = perInfo('Jim','Texas','35','50000000')
    person2 = perInfo('James','Kings Landing','35','99595959')
    person3 = perInfo('John','Winterfell','35','858585858')


    print(person1.fulldata())
    print(person2.fulldata())
    print(person3.fulldata())


    input('')
main()