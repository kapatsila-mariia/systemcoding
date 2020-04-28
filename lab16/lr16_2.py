m = input('Введіть m \n')
m = int(m)
k = input('Введіть k \n')
k = int(k)
k1 = m*k/100
d = 0
if m <= 50:
    m = m + k1
    d = d + 1
print(d)