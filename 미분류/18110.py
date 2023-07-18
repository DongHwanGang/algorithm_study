import math
import sys
input = sys.stdin.readline

n = int(input())
arr = []
def mean(n):
    trimmedMean = n*0.15
    number = math.floor(trimmedMean)
    if number == math.floor(trimmedMean - 0.5):
        return number + 1
    else:
        return number

def round(n):
    number = math.floor(n)
    if number == math.floor(n - 0.5):
        return number + 1
    else:
        return number

if n != 0:
    for i in range(n):
        temp = int(input())
        arr.append(temp)

    arr.sort()
    roundTrimmedMean = mean(n)
    print(round(sum(arr[roundTrimmedMean:n-roundTrimmedMean])/(n-roundTrimmedMean*2)))
else:
    print(0)