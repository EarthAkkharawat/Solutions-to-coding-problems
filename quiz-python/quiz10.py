def to_gray(img):
    l=[];k=[];x=0
    for i in img:
        for e in i:
            a=len(e)
            for j in e:
                x+=int(j)
            l.append(x//len(e))
            x=0
            if len(l)%len(e)==0:
                k.append(l)
                l=[]
    return k

# def to_gray( img ):
#     return [[sum(i)//3 for i in e] for e in img]
print( to_gray([ [[2,1,3],[2,2,4],[3,3,3]], [[4,4,5],[6,6,10],[3,4,9]] ]) )