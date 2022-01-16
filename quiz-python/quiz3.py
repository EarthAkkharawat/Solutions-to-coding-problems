import math

x = [int(e) for e in input().split()]
n = int(input())

g = x[-n:] + x[:-n]
y = x[n:]+x[:n]



print(g)
print(y)

















