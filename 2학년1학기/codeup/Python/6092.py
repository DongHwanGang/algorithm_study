num = int(input())
call = map(int, input().split())
namelist = [0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,0,0 ,0]

for i in call:
    namelist[i - 1] += 1
    
print(namelist)
