def count_sheeps(arrayOfSheeps):
  # TODO May the force be with you
  
    totalOfSheep = 0

    for sheep in arrayOfSheeps:
      if sheep == True: #if each element is equal to true
          totalOfSheep += sheep #count the number every time an element = true
    return totalOfSheep #Use return to print number, not printing since they print string
        
count_sheeps([True, True, True, False])

##x = True
##y = False
##
##if x == True:
##    print(x) #This return "True"
##    print(5 + x) #Return 6
