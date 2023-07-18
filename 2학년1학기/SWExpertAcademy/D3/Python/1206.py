for i in range(10):
    N = int(input())
    arr = list(map(int, input().split()))
    answer = []
    for idx in range(2, N - 2):
        std = arr[idx]
        temp = arr[idx-2:idx+3]
        temp.sort()
        if(std == temp[-1]):
            answer.append(temp[-1] - temp[-2])

    print("#%d %d" %(i+1, sum(answer)))
