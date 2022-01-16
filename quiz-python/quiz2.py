import math

min = float(input())
sigma = float(input())
x = float(input())
formula = (1/(sigma*math.sqrt(2*math.pi)))*math.exp((-(x-min)**2/(2*sigma**2))) 




print(round(formula, 8))