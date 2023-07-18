import sys
input = sys.stdin.readline

Sarr = list(map(int, input().split()))
answer = True

for _ in range(7):
    if Sarr[_] <= Sarr[_+1]:
         if Sarr[_] % 25 == 0 and Sarr[_+1] % 25 == 0:
             if 100 <= Sarr[_] <= 675 and 100 <= Sarr[_+1] <= 675:
                continue
             else:
                 answer = False
                 break
         else:
             answer = False
             break
    else:
        answer = False
        break

if answer:
    print("Yes")
else:
    print("No")
