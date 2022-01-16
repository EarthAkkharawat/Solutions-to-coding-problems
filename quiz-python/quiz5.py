grades = ['A','B','C','D','F']
score = [4,3,2,1,0]
s = input().split()
scores = 0
for i in range(len(s)):
    if s[i] in grades:
        r = grades.index(s[i])
        scores += score[r]
x = scores/len(s)
print(round(x,2))
        
