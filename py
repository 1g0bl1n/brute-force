from itertools import *
a=int(input("количество знаков: "))
p=list(product("0123456789",repeat=a))
for i in p:
  x=''.join(i)
  print(x)
