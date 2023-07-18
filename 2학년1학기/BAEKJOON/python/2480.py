a = list(map(int, input().split()))
dice = temp = cnt = 0



for i in range(1, 6):
    temp = a.count(i)
    if temp > cnt:
        cnt = temp
        dice = i

if cnt == 1:
    dice = max(a)
    print(dice * 100)
elif cnt == 2:
    print(1000 + dice*100)
else:
    print(10000 + dice*1000)




    

    
