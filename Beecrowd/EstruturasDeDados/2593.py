text = input().split(" ")
pos = [len(w)+1 for w in text]
j = 1
for i in range(len(pos)):
    j, pos[i] = j+pos[i], j

    pos[i] = pos[i]-1
N = int(input())
word = input().split(" ")
for w in word:
    flag = False
    for i in range(len(text)):
        if w == text[i]:
            if flag: print(end=" ")
            flag = True
            print(pos[i], end="")
    if flag: print()
    else: print(-1)