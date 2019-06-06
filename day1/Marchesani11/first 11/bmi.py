#! /usr/bin/env python3
#Lucas Marchesani

weight = float(input('Put your weight in in pounds\n'))
height = float(input('Input your height in inches\n'))

weight = weight * .4536
height = height * .0254
bmi = weight/(height*height)

print('Your bmi is',bmi)
input("")