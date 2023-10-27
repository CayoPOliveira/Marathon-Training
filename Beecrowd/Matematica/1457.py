n = int(input())
for i in range(n):
    ent = input()
    num_e = 0
    num = ""
    for k in range(len(ent)):
        if ent[k] != "!" :
            num+=ent[k]
        else:
            num_e += 1
    num = int(num)
    res=num
    while (True) :
        if (num-num_e >= 1):
            res *= (num-num_e)
            num -= num_e
        else: break
    print(res)
