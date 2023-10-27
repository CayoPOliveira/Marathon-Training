v = input()

count=0
for i in v:
    if i == 'O':
        count+=1
if count!=1:
    print("?")
elif v=="XOX":
    print("*")
else:
    print("Alice")

