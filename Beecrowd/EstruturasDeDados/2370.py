N,T = (int(i) for i in input().split(" "))
nomes = [0 for _ in range(int(1e6) + 1)]
for i in range(N):
    jogador = input().split(" ")
    nomes[int(jogador[1])] = jogador[0]
times = [[] for _ in range(T)]
j = 0
for i in range(len(nomes)-1, -1, -1):
    if nomes[i]!=0:
        times[j].append(nomes[i])
        j = j+1 if j<T-1 else 0
for i in range(T):
    print(f"Time {i+1}")
    times[i].sort()
    for n in times[i]:
        print(n)
    print()