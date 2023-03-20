import sys

odd_arr = []

for i in range(7):
    num = int(sys.stdin.readline().rstrip())
    if num % 2 == 1:
        odd_arr.append(num)

if not len(odd_arr):
    print(-1)
else:
    print(sum(odd_arr))
    print(min(odd_arr))
#O(1)?