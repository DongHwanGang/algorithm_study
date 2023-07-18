import sys

arr = []

for i in range(5):
    num = int(sys.stdin.readline().rstrip())
    arr.append(num)

arr.sort()
print(sum(arr)//5)
print(arr[2])