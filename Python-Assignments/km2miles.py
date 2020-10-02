# Saboor Malik
# CSP 017
# Unit 4-1: Programming Assignment - Calling a function

##Write a program that calls a function named km2miles().
##
##The function should ask the user to enter some number representing kilometers.
##
##The function converts the number of kilometers to miles using the formula: Miles = kilometers * 0.6214
##
##The function then prints out the number of miles.

def km2miles(): #defined funciton
    try:
        keep_going = 'y'
        
        while keep_going.lower() == 'y': #looping when keep_going is equal to 'y'.  lower() function added, in case user enter 'Y' instead of 'y'
            kmValue = int(input('Please enter some number representing kilometers. ')) #Converting user input to integer so we can perform calculation.
            milesValue = kmValue * 0.6214 

            print(milesValue) #print result here.

            keep_going = input('Would you like to perform another calculation? \t y/n ')

            
    except: #if we get an error.
        print('Please enter a number')
        km2miles() #call the function again if we get an error.

km2miles() #Call the function here.
    
            

