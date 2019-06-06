#! /usr/bin/env python3
#Lucas Marchesani

import tkinter

class myGUI:
    def __init__(self):
        self.main_window = tkinter.Tk()
        self.main_window.configure(bg = 'green')
        self.label1 = tkinter.Label(self.main_window, text='RED', bg = 'green', fg = 'red', font = 40)
        self.label1.pack()
        self.label2 = tkinter.Label(self.main_window, text='WHITE', bg = 'green', fg = 'white', font = 40)
        self.label2.pack()
        self.label3 = tkinter.Label(self.main_window, text='BLUE', bg = 'green', fg = 'blue', font = 40)
        self.label3.pack()
        

        tkinter.mainloop()

my_gui = myGUI()

