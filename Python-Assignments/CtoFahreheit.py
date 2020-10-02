# Saboor Malik
# CSP 017
# Programming Assignment #2 - Celsius to Fahrenheit


#Exercise 5: Write a program
#which prompts the user for a Celsius temperature, convert the temperature to Fahrenheit, and print out the converted temperature.

###Ask user for a Celsius Temperature
### FahrenheitTemp = CelsuisTemp × 9/5 + 32
##cTemp = input('Enter any Celsius temperature to be converted to Fahrenheit: ')
##cTemp = int(cTemp) #Celsius with assigned value prompted by the user
##
###Calculating the value
##fTemp = (cTemp*(9/5)) + 32 #Fahrenheit Variable; PEMDAS important! Use Parentheses first
##
####print(fTemp + ' Degree')
##
##fTemp = str(fTemp) #Rewritten the variable to string to concatenate with strings
##cTemp = str(cTemp)
##
##
#####"The Celsius temperature of ?? is same as the Fahrenheit temperature of ??"
### Replaced ?? to value entered by the user and to the calculated value.
##print('The Celsius temperature of ' + cTemp + ' is same as the Fahrenheit temperature of ' + fTemp)
##
##
### Test:  Test your code by entering 0 (Celsius temp), which should convert to 32 Fahrenheit
### - your output statement would look like:
### The Celsius temperature of 0 is the same as the Fahrenheit temperature of 32



# This is my improved code.  Might should've clean it up but wanted to show progress.

cTemp = int(input('Enter any Celsius temperature: ')) #Asked user to put Celsius temperature then converted it to integar to calculateFahrenheit

fTemp = str((cTemp*(9/5)) + 32) #Used the formula to find Fahrenheit.  Changed it to string after to concatenate with strings when printing
cTemp = str(cTemp) #Changed integar to string to concatenate with strings when printing.  Needed to use integar value to calculate then string value after.

#####"The Celsius temperature of ?? is same as the Fahrenheit temperature of ??"
### Replaced ?? to value entered by the user and to the calculated value.
print('The Celsius temperature of ' + cTemp + ' is same as the Fahrenheit temperature of ' + fTemp)



# Even more simple code?

#fTemp = str((int(input('Enter any Celsius temperature: ')*(9/5)) + 32)
#print(fTemp)

# Needed to use cTemp value for printing anyway.





    

