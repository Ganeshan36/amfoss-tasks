x, y, z = map(int, input().split())
if(x%z == 0):
    s=(x//z)
elif(x%z!=0):
    s=(x//z)+1
if(y%z==0):
    a=y//z
elif(y%z!=0):
    a=(y//z)+1
print(a*s)