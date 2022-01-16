def histogram_bin( data ):
    # return histogram bin of the given data 
    hist_bin = []
    for e in range(min(data), max(data)+1):
        hist_bin.append(e)
    return hist_bin

def count( data, element ):
    # return the count of the given element in the given data
    c = 0
    for e in data:
        if e == element: c += 1
    return c

#----------------------------------------------------------
# def histogram( data ):
#     k=min(data)
#     new=[]
#     data = sorted(data)
#     while k <= max(data):
#         new.append(count(data, k))
#         k+=1
#     a=histogram_bin(data)
#     return a,new
def histogram( data ):
    x = histogram_bin( data )
    y = []
    for e in x:
        y.append(count(data, e))
    return x, y

print( histogram( [7,9,11] ) )    
     

exec(input().strip())




#-----------------------------------































