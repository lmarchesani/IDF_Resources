#! /usr/bin/env python3
#Lucas Marchesani

from tkinter import *

class MyFirstGUI:
    def __init__(self, root):
        self.root = root
        self.root.title("My Stupid Calendar")
        root.geometry("800x600")

        Frame_1 = Frame(self.root)
        Frame_1.grid()
        Frame_2 = Frame(Frame_1)
        Frame_2.grid(row = 0,column = 0)
        Frame_3 = Frame(Frame_1)
        Frame_3.grid(row = 3,column = 0)

        Day = IntVar()
        Month = IntVar()
        Year = IntVar()
        DayOfWeek = StringVar()
        NewDay = IntVar()
        NewMonth = StringVar()
        NewYear = IntVar()

        self.Day = Label(Frame_1, text = "Enter the Day", anchor = 'w', font = 14)
        self.Day.grid(row = 0,column = 0)
        self.Day = Entry(Frame_1,textvariable = Day)
        self.Day.grid(row = 0, column = 1)

        self.Month = Label(Frame_1, text = "Enter the Month (in numerical value)",  anchor = 'w', font = 14)
        self.Month.grid(row = 1,column = 0)
        self.Month = Entry(Frame_1,textvariable = Month)
        self.Month.grid(row = 1, column = 1)

        self.Year = Label(Frame_1, text = "Enter the Year", anchor = 'w', font = 14)
        self.Year.grid(row = 2,column = 0)
        self.Year = Entry(Frame_1,textvariable = Year)
        self.Year.grid(row = 2, column = 1)

        
        def dumb_calendar():
            day = Day.get()
            month =Month.get()
            year = Year.get()
            #determines which month it is based on the numerical value input by the user
            day_count = 0
            new_day= 0
            new_month = ' '
            if(month==1):
                day_count = day
            elif(month==2):
                day_count = day+31
            elif(month==3):
                day_count = day+59
            elif(month==4):
                day_count = day+90
            elif(month==5):
                day_count = day+120
            elif(month==6):
                day_count = day+151
            elif(month==7):
                day_count = day+181
            elif(month==8):
                day_count = day+212
            elif(month==9):
                day_count = day+243
            elif(month==10):
                day_count = day+273
            elif(month==11):
                day_count = day+304
            elif(month==12):
                day_count = day+334
            
            #here lets actually use the day_count to print out the new format
            #new_day will return the xth of the month, needed for print out
            if ((day_count>0) & (day_count<=28)):
                new_month = 'January'
                new_day = day_count
            elif((day_count>28)&(day_count<=56)):
                new_month = 'February'
                new_day = day_count-28
            elif((day_count>56)&(day_count<=84)):
                new_month = 'March'
                new_day =(day_count-56)
            elif((day_count>84)&(day_count<=112)):
                new_month = 'April'
                new_day =(day_count-84)
            elif((day_count>112)&(day_count<=140)):
                new_month = 'May'
                new_day =(day_count-112)
            elif((day_count>140)&(day_count<=168)):
                new_month = 'June'
                new_day =(day_count-140)
            elif((day_count>168)&(day_count<=196)):
                new_month = 'Solstice'
                new_day =(day_count-168)
            elif((day_count>196)&(day_count<=224)):
                new_month = 'July'
                new_day =(day_count-196)
            elif((day_count>224)&(day_count<=252)):
                new_month = 'August'
                new_day =(day_count-224)
            elif((day_count>252)&(day_count<=280)):
                new_month = 'September'
                new_day =(day_count-252)
            elif((day_count>280)&(day_count<=308)):
                new_month = 'October'
                new_day =(day_count-280)
            elif((day_count>308)&(day_count<=336)):
                new_month = 'November'
                new_day =(day_count-308)
            elif((day_count>336)&(day_count<=364)):
                new_month = 'December'
                new_day =(day_count-336)
            elif(day_count==365):
                new_month = 'December?'
                print("It is year-day!")
                new_day = 29

            #outputs the day of the week
            #day_of_week will return monday,tuesday or such.. needed for print out
            day_of_week = ''
            if((new_day==1)|(new_day==8)|(new_day==15)|(new_day==22)):
                day_of_week = 'Sun'
            elif((new_day==2)|(new_day==9)|(new_day==16)|(new_day==23)):
                day_of_week = 'Monday'
            elif((new_day==3)|(new_day==10)|(new_day==17)|(new_day==24)):
                day_of_week = 'Tuesday'
            elif((new_day==4)|(new_day==11)|(new_day==18)|(new_day==25)):
                day_of_week = 'Wednesday'
            elif((new_day==5)|(new_day==12)|(new_day==19)|(new_day==26)):
                day_of_week = 'Thursday'
            elif((new_day==6)|(new_day==13)|(new_day==20)|(new_day==27)):
                day_of_week = 'Friday'
            elif((new_day==7)|(new_day==14)|(new_day==21)|(new_day==28)):
                day_of_week = 'Saturday'
            elif(new_day==29):
                day_of_week = 'Year-Day'

            NewDay.set(new_day)
            NewMonth.set(new_month)
            NewYear.set(year)
            DayOfWeek.set(day_of_week)

        self.BellyButton = Button(Frame_3, text = "Submit", command = dumb_calendar())
        self.BellyButton.grid(row = 3, column = 0)

        #self.DayOfWeek = Label(Frame_1, text = "The day of the week is", anchor = 'w', font = 14)
        #self.DayOfWeek.grid(row = 4, column = 0)
        #self.DayOfWeek = Entry(Frame_1, DayOfWeek)
        #self.DayOfWeek.grid(row = 4, column = 1)

        self.Day = Label(Frame_1, text = "The new date is", anchor = 'w', font = 14)
        self.Day.grid(row = 5, column = 0)
        self.Day = Entry(Frame_1,NewDay)
        self.Day.grid(row = 5, column = 1)

        self.Month = Label(Frame_1, text = "The new month is", anchor = 'w', font = 14)
        self.Month.grid(row = 6, column = 0)
        self.Month = Entry(Frame_1, NewMonth)
        self.Month.grid(row = 6, column = 1)

        self.Year = Label(Frame_1, text = "The year is", anchor = 'w', font = 14)
        self.Year.grid(row = 7, column = 0)
        self.Year = Entry(Frame_1,NewYear)
        self.Year.grid(row = 7, column = 1)

        #TO DO LIST
        #OUTPUT ALL THE VARIABLES IN THE GUI THAT WE STORE STUFF IN
        #   - day_of_week
        #   - new_day
        #   - year
        #   - Need to make something to be abke ot hold the new month 
root = Tk()
my_gui = MyFirstGUI(root)
root.mainloop()
