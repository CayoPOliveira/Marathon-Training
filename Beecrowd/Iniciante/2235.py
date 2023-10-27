a,b,c = [int(i) for i in input().split(" ")]
if a==b or b==c or a==c:
        print("S")
else:
        if a+b == c or a+c==b or b+c == a:
                print("S")
        else: print("N")
