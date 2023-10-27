N = int(input())

while(N):
    S = input().strip().split(' ')
    for c in S:
        if c!='':
            print(c[0], end="")
    print()
    N = N-1
