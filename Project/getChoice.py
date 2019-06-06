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
