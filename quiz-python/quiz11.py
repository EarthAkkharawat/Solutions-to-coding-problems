# data = {}
# N = int(input())
# for i in range(N):
#     x = [e.strip() for e in input().split(':')]
#     data[x[0]] = [e.strip() for e in x[1].split(',')]

r={y:set(data[y]) for y in data}
L=[]
for i in r:
    for a in r:
        if a!=z and r[i]&r[a]==set() and sorted([i,a]) not in L:
            L.append(sorted([i,z2]))
L.sort()
if len(L)!=0:
    for g in L:
        print(' '.join(g))
else:
    print(None)