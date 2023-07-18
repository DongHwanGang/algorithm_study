a, b, c = map(int, input().split())
dice = cnt = 0

if a == b and b == c:
    dice = a
    cnt += 2

elif a == b:
    dice = a
    cnt += 1
    
elif b == c:
    dice = b
    cnt += 1
    
elif c == a:
    dice = c
    cnt += 1
    
else:
    if a < b:
        if b < c:
            dice = c
        else:
            dice = b
    else:
        if a < c:
            dice = c
        else:
            dice = a

if cnt == 0:
    print(dice*100)
elif cnt == 1:
    print(1000+dice*100)
else:
    print(10000+dice*1000)
