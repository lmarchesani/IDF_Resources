#! /usr/bin/env python3
#Lucas Marchesani
def leetify(contents):
    contents = contents.lower()
    #file creation process
    post_file = str(input("Input the name of the file you want to write to output to (do not include the .txt)\t"))
    post_file = post_file +".txt"
    post= open(post_file, "w+")
    #so what im bringing in to this function is the contents of the input file a
    contents = contents.replace('e','3')
    contents = contents.replace('a','4')
    contents = contents.replace('t','7')
    contents = contents.replace('o','0')
    contents = contents.replace('l','1')
    post.write(contents)
    post.close()
    input('')  

def main():
    file_extension = ".txt"
    #file creation process
    pre_file = str(input("Input the name of the file you want to write to at first (do not include the .txt)\t"))
    pre_file = pre_file + file_extension
    pre= open(pre_file, "w+")
    #set variables for my loop
    looper = True
    listy_boi = []
    i=0
    #loop to input different words into a list, which will be written into a file
    while (looper == True):
        temp_store = input("Input your string you want to leetify\t")
        listy_boi.append(temp_store)
        user_choice = input("Would you like to input another word?\t")
        user_choice = user_choice.lower()
        if user_choice == 'yes':
            looper = True
        else:
            looper = False
            #write the newest element of the list to the file with a space afterwards
        pre.write(str(listy_boi[i])+" " )
        i+=1
    #close the file and give new permissions so I can read it
    pre.close()
    pre = open(pre_file, "r")
    #trying to read the contents of pre
    contents_of_pre = pre.read()
    #function call to leetify
    leetify(contents_of_pre)
    pre.close()
main()