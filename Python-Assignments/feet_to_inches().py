# Saboor Malik
# CSP 017
# Unit 4-2: Programming Assignment - Passing arguments to a function

def feet_to_inches(feet): #defined function.  Added an paramemter so we can pass an argument.
    inches = feet*12 # feet times 12 since feet contain 12 inches.  5 feet = 60 inches
    print(inches, 'inches')

feetInput = int(input('Enter any number in feet: ')) #Asking the user to enter the number in feet then use built-in function of int() to get the value in integer.

feet_to_inches(feetInput) #Calling the function with passed arguments to the parameter 'feet'.



