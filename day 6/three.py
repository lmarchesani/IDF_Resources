#! /usr/bin/env python3
#Lucas Marchesani

from tkinter import *
import random

class Application(Frame):

    def __init__(self, master): #initialize newly created Application object
        #initialize this baby
        Frame.__init__(self, master) # super(Application, self).__init__(master) in python 3
        self.grid()
        self.create_widgets()

    def create_widgets(self):
        #get all the user input and create the format that gave me a lot of headaches
        # create instruction label                                             Will format all this stuff so it doesnt look bad
        Label(self, text = "Tax Calculater 2019").grid(row = 0, column = 0, sticky = W)
        Label(self, text = "Income").grid(row = 1, column = 0, sticky = W)
        self.income_ent = Entry(self)
        self.income_ent.grid(row = 1, column = 1, sticky = W)

        # create guess input prompt label and entry
        Label(self, text = "Dependents:").grid(row = 2, column = 0, sticky = W)
        self.dependents_ent = Entry(self)
        self.dependents_ent.grid(row = 2, column = 1, sticky = W)

        # create start game prompt label and submit button          puts it on the third row, and the submit button below it
        Label(self, text = "Press Submit to see total taxes").grid(row = 3, column = 0, sticky = W)
        Button(self, text = "Submit", command = self.Calculater_taxes).grid(row = 3, column = 1, sticky = W)


        #creates the output stuff
        self.text = Text(self, width = 75, height = 10, wrap = WORD)
        self.text.grid(row = 4, column = 0, columnspan = 4)

    def Calculater_taxes(self):
        #get the input and save them to different variables for quick maths
        income = int(self.income_ent.get())
        dependents = int(self.dependents_ent.get())
        #create my tax brackets
        if (income<0) | (dependents<139):
            quit()
        if (income<9500):
            taxes_owed = (income*.1)/dependents
        elif ((income>9500) & (income <38000)):
            taxes_owed = (income*.12)/dependents
        elif ((income>38000) & (income <82000)):
            taxes_owed = (income*.22)/dependents
        elif ((income>82000) & (income <157000)):
            taxes_owed = (income*.24)/dependents
        elif ((income>157000) & (income <200000)):
            taxes_owed = (income*.32)/dependents
        elif ((income>200000) & (income <500000)):
            taxes_owed = (income*.35)/dependents
        else:
            taxes_owed = (income*.37)/dependents

        #lets actuallt output this shit
        self.text.delete(0.0, END)
        self.text.insert(0.0,taxes_owed)

# main
root = Tk()
#names the window
root.title("Marchesani Money Manager")
app = Application(root)
root.mainloop()