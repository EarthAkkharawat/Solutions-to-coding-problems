u = input()
o = ''
for e in u:
    if e.isalpha():
        o += e.upper()
    elif e == ' ':
        o += '-'
print(o)
        
        
        