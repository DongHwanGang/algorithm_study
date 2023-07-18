strN = input()
M = int(input())

arr = [0] * 10
if M:
    tmp = list(map(int, input().split()))
    for i in tmp:
        arr[i] = 1

arrN = list(map(int, strN))
N = int(strN)

if N == 100:
    print(0)
    exit(0)
else:
    tempanswer1 = 0
    tempanswer2 = 0
    temp1 = 0
    temp2 = 0
    for i in arrN:
        if arr[i] == 0:
            temp1 += 1
        else:
            a, b = 0, 0
            tup, tdn = i, i
            flag1, flag2 = 0, 0
            # [0,0 0, 0, 0, ,1 ,0,0 , 0]
            while arr[tdn] == 1 and tdn > 0:
                tdn -= 1
                a += 1
                if arr[tdn] == 0:
                    flag1 = a
                    break

            while arr[tup] == 1 and tup < 9:
                tup += 1
                b += 1
                if arr[tup] == 0:
                    flag2 = b
                    break

            if flag1 and flag2:
                temp2 = flag1 if flag1 < flag2 else flag2
            elif flag1:
                temp2 = flag1
            elif flag2:
                temp2 = flag2

            tempanswer1 = tempanswer1*10+ temp2
            temp1 += 1

    tempanswer1 = temp1 + tempanswer1
    print(tempanswer1)