s = [float(e) for e in input().split()]
new = []
for i in range(len(s)-1):
    avg = (s[2*i]+s[2*i+1])/2
    s.insert(2*i+1,avg)
    
# news = [0]*(2*len(s)-1)
# news[1::2] = new
# news[::2] = s
print(s)