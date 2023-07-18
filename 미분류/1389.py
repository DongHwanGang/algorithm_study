N, M = list(map(int, input().split()))
LinkedGraph = [set() for j in range(N + 1)]
answerarr = [0]*N

for i in range(M):
    a, b = list(map(int, input().split()))
    LinkedGraph[a].add(b)
    LinkedGraph[b].add(a)
print(LinkedGraph)

for i in range(1, N+1):
    for j in list(LinkedGraph[i]):
        queue = []
        min = []
        queue.append(j)
        for k in range(1, N+1):
            if i == k:
                continue
            else:
                while queue:
                    tmp = queue.pop(0)
                    for l in list(LinkedGraph[tmp]):
                        if l != j:
                            queue.append(l)