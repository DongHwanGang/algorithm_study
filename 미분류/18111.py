N, M, B = list(map(int, input().split()))
inputCheck=[0]*257
caluCheck=[]
save=[]

for i in range(N):
    numbers = list(map(int, input().split()))
    for j in numbers:
        if inputCheck[j] != 0:
            inputCheck[j] = inputCheck[j] + 1
        else:
            inputCheck[j] = 1
            caluCheck.append(j)

for i in range(257):
    cmpNum = N*M - inputCheck[i]
    if i != 0:
        temptime1 = cmpNum*2
    if i != 256:
        temptime2 = inputCheck[i]
#256
