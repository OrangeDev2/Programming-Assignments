# Saboor Malik
# CSP 017
# Chapter 5 - Loop Assignment

#function
def distanceTraveled():
    speed = int(input('Enter the speed of the vehicle in mph: ')) #int() so we can multiply the value by the hours.
    hours = int(input('Enter the number of hours traveled: ')) #int() so we can use built-in function, range()

    #printing this outside of for loop because I want this to print once.
    print(('Enter the speed of the vehicle in mph: ' + str(speed)), '\n', ('Enter the number of hours traveled: ' + str(hours)), '\n', 'Hour Distance Traveled', '\n', '------------------------', sep='')
  
    for hour in range(1, (hours+1)): #range() gens between 1 to hours value.  Because it does not include last number so we round up to get the last number.
        print(hour, '\t\t',(float(speed*hour))) #The same output as an example below.  Looping the number of hour in range(hours+1) then multipled the looped number by the speed since it is constant.  Added 2 tabs between so it looks better.


        
distanceTraveled() #call function here.






#Example Output:
##Enter the speed of the vehicle in mph: 40
##Enter the number of hours traveled: 5
##Hour Distance Traveled
##------------------------
##1              40.0
##2              80.0
##3              120.0
##4              160.0
##5              200.0
