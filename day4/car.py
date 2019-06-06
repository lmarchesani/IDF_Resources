#! /usr/bin/env python3
#Lucas Marchesani

class CarClass:

    def __init__(self, year_model, make):
        self.year_model = year_model
        self.make_ = make
        self.speed_ = 0

    def accelerate(self):
        self.speed_ += 5

    def brake(self):
        self.speed_ -= 5

    def car_speed (self):
        return self.speed_

    
#main function to ask user for input and print results
def main():
    Auto = CarClass(2019, "Audi")

    for i in range (5):
        Auto.accelerate()
        print(Auto.car_speed())

    for i in range (5):
        Auto.brake()
        print(Auto.car_speed())
main()