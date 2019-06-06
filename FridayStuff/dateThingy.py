#! /usr/bin/env python3
#Lucas Marchesani
class Date:
    def __init__(self,m,d):
        self.__month = m
        self.__day = d

    def get_day(self):
        pass
        
    def get_month(self):
        pass

    def days_in_month(self):
        pass

    def next_day(self):
        pass

    def compare(self, date):
        if self.__month < date.__month:
            return -1
        elif self.__month > date.__month:
            return 1
        else:
            if self.__day < date.__day:
                return -1
            elif self.__day >date.__day:
                return 1
            else:
                return 0
