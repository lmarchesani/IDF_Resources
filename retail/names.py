#! /usr/bin/env python3
#Lucas Marchesani

def main():
    boys = open("BoyNames.txt", "r")
    girl = open("GirlNames.txt", "r")
    if not boys:
        print ("Did not open")
        quit()
    elif not girl:
        print("Did not open")
        quit()
    else:
        b_names = boys.read()
        b_names = b_names.lower()
        g_names = girl.read()
        g_names = g_names.lower()
        search_name = str(input("Input the name you would like to search for\t"))
        search_name = search_name.lower()
        user_choice = str(input("Would you like to search a male name, a female name, or both (input male, female, or both)\t"))
        user_choice = user_choice.lower()
        if user_choice == "male":
            if (b_names.find(search_name) == -1):
                print ("Your name is not in the most popular boys names")
            else:
                print ("Your name is in the list!")
        elif user_choice == "female":
            if (g_names.find(search_name) == -1):
                print ("Your name is not in the most popular girls names")
            else:
                print ("Your name is in the list!")
        elif user_choice == "both":
            if ((g_names.find(search_name) == -1) or b_names.find(search_name == -1)):
                print ("Your name is not in the most popular girls names")
            else:
                print ("Your name is in the list!")
        else:
            print("Invalid input")
            quit() 
    boys.close()
    girl.close()
    looper = str(input('Would you like to search another name?\t'))
    looper = looper.lower()
    if looper == "yes":
        main()
    else:
        quit()
main()