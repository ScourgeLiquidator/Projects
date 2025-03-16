import random
import sys
print("r: Rock\np: Paper\ns: Scissor")
c = random.choice([-1,0,1])
you = input("Enter your choice : ")
dict = {"r" : 1,"p" : -1, "s" : 0}

# taking precautions, if user is trying to enter an invalid choice !
try : 
    yc = dict[you]
except KeyError:
    print("You have choosen an Invalid Choice !")
    sys.exit(1)
    
reversedict = {1 : "Rock",-1 : "Paper", 0 : "Scissor"}
print(f"You chose : {reversedict[yc]}\nComputer chose : {reversedict[c]}")
if(yc == c):
    print("It's a Draw !")
else :
    '''
    if(yc == 1 and c == -1): # (yc - c) = 2
        print("You Lose !")
    elif(yc == 1 and c == 0): # (yc - c) = 1
        print("You Win !")
        
    elif(yc == -1 and c == 1): # (yc - c) = -2
        print("You Win !")
    elif(yc == -1 and c == 0): # (yc - c) = -1
        print("You Lose !")
        
    elif(yc == 0 and c == 1): # (yc - c) = -1
        print("You Lose !")
    elif(yc == 0 and c == -1): # (yc - c) = 1
        print("You Win !")
    else:
        print("Something went wrong !")
    '''
    if((yc - c) == 2 or (yc - c) == -1):
        print("You Lose !")
    else:
        print("You Win !")