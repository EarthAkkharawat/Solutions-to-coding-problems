n = int(input())
k = 0; sid = {}
while True:
    k += 1
    s = input().strip()
    if s == '-': break
    sid[s] = k%n
    if k%n == 0:
        sid[s] = n
    
while True:
    s = input().strip()
    if s == 'quit': break
    else:
        if s not in sid:
            print('not found')
        else:
            print(sid[s])