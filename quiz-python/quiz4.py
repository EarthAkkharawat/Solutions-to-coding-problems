s = input()
d = ['Sunday','Monday', 'Tuesday', 'Wednesday', 'Thursday', \
             'Friday','Saturday']
co = ['Red','Yellow','Pink','Green','Orange','Blue','Purple']

for i in range(4):
    for i in range(len(d)): 
        if s == d[i]:
            print(co[i])
            break
    if s != d[i]: 
        print('Invalid day')
        break   
    s = input()


        # for i in range(5):
#     if s in :
#         print('True')
#     else:
#         print('False')
#     s = input()
#     
#     
    


# c = input()
# print(len(c)==1 and c in 'aeiouAEIOU')
# c = input()
# print(len(c)==1 and c in 'aeiouAEIOU')
# c = input()
# print(len(c)==1 and c in 'aeiouAEIOU')
# c = input()
# print(len(c)==1 and c in 'aeiouAEIOU')
# c = input()
# print(len(c)==1 and c in 'aeiouAEIOU')