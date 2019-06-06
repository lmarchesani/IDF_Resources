def getChoice():
    Int_userChoice = 0
    userChoice = str(input("Choose rock, paper, or scissors\t"))
    userChoice = userChoice.lower()
    if userChoice == "rock":
        Int_userChoice = 1
    elif userChoice == "paper":
        Int_userChoice = 2
    elif userChoice == 'scissors':
        Int_userChoice = 3
    else:
        print("Invalid input, try again.\n")
        getChoice()
    
    return Int_userChoice

def compare_choices(npcChoice, userChoice):
    #rock logic
    if userChoice == 1:
        if npcChoice == 1:
            result = 'Draw'
        elif npcChoice == 2:
            result = 'Loss'
        else:
            result = 'Victory'
    #paper logic
    elif userChoice == 2:
        if npcChoice == 1:
            result = 'Victory!'
        elif npcChoice == 2:
            result = 'Draw'
        else:
            result = 'Loss'
    #scissors logic
    elif userChoice == 3:
        if npcChoice == 1:
            result = 'Loss'
        elif npcChoice == 2:
            result = 'Victory!'
        else:
            result = 'Draw'



    return result
