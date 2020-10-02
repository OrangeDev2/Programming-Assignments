def series_sum(n):
  denom = 1 #For every n, denom increase by 3.
  result = 1

  x = 1
 
  if n != 0:
    while x < n: #1 increase by 1 approaching the given n.  Then while loop will end.
      x += 1
      #print(x)
      denom += 3
      result += (1/denom) #1 += 1/denom... denom increasing by 3 for every n.
      #print(denom)
    print(format(result, '.2f')) #round(number, digit) does not work with 1.
  else:
    print(0.00)

        
series_sum(5) #n: 2 -> 1.25 since (1 + 1/4), (4/4 + 1/4), (1 + 0.25)
