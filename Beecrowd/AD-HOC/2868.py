N = int(input())
for i in range(N):
    a, s, b, i, R = input().split(" ")
    a,b,R = int(a), int(b), int(R)
    rv = a+b
    if(s=='-'): rv = a-b
    elif(s=='x'): rv = a*b

    distance = rv-R
    if(distance < 0): distance = -distance
    print("E", end = "")
    for i in range(distance):
        print("r", end="")
    print("ou!")
