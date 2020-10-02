def array_diff(a, b):
    #your code here
    for x in b:
      a.remove(x)
      return a
    
array_diff([1, 2, 3, 1, 4],[1]) ##== [2]
