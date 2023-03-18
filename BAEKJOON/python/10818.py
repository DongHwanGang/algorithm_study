import sys

input = sys.stdin.readline
N = int(input())

arr = list(map(int, input().split()))
print('%d %d' %(min(arr), max(arr)))