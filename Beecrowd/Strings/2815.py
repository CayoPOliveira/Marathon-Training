str = input().split(" ")

resp = ""
for i in range(len(str)):
    if(i!=0):
        resp+=" "
    if str[i][0:2] == str[i][2:4]:
        resp+=str[i][2:]
    else:
        resp+=str[i]

print(resp)
