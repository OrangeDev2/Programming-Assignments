# Saboor Malik
# CSP 017
# Assigment 2.E (Calculating Gross pay)

#Exercise 3: Write a program
#to prompt the user for hours and rate per hour to compute gross pay.


Name = input('Hello there! I am a computer that calculate your gross pay exlcuding taxes.  What is your name? ') #Greeting and use name to say Hi

# Greeting
print('Hello ' + Name + '!') #Hello Name!

#Asking user for prompts (hours and rate)
Hours = input('How many hours do you work weekly?  Please enter a number: ')
Hours = float(Hours) #float(int(Hours)) #Float function because I wanted to include decimal 

Rate = input('What is your hourly rate? Please enter a number: ') #Converted to Integar from String
Rate = float(Rate) #float(int(Rate))

#Calcuating gross pay
print('Your gross pay is: $' + str(Hours*Rate))

