import math
k=input('Введіть k\n')
k=int(k)
x=input('Введіть х\n')
x=int(x)
z=math.sin(x)*math.sin(x-k)
print('%.3f' % z)
