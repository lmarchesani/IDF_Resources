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
        
        Label(self, text = "Test 1:").grid(row = 1, column = 0, sticky = W)
        self.test1_ent = Entry(self)
        self.test1_ent.grid(row = 1, column = 1, sticky = W)

        # create guess input prompt label and entry
        Label(self, text = "Test 2:").grid(row = 2, column = 0, sticky = W)
        self.test2_ent = Entry(self)
        self.test2_ent.grid(row = 2, column = 1, sticky = W)

        Label(self, text = "Test 3:").grid(row = 3, column = 0, sticky = W)
        self.test3_ent = Entry(self)
        self.test3_ent.grid(row = 3, column = 1, sticky = W)

        # create start game prompt label and submit button          puts it on the third row, and the submit button below it
        
        Button(self, text = "Submit", command = self.averager).grid(row = 2, column = 2, sticky = W)


        #creates the output stuff
        self.text = Text(self, width = 75, height = 10, wrap = WORD)
        self.text.grid(row = 4, column = 0, columnspan = 4)

    def averager(self):
        #get the input and save them to different variables for quick maths
        test1 = int(self.test1_ent.get())
        test2 = int(self.test2_ent.get())
        test3 = int(self.test3_ent.get())
        average = (test1+test2+test3)/3

        #lets actuallt output this shit
        self.text.delete(0.0, END)
        self.text.insert(0.0,average)

# main
root = Tk()
#names the window
root.title("Marchesani Average ")
app = Application(root)
root.mainloop()