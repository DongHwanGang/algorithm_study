import sys

result = ['D', 'C', 'B', 'A', 'E']
answer = []

for i in range(3):
    stick = list(map(int, sys.stdin.readline().split()))
    answer.append(result[sum(stick)])

for i in answer:
    print(i)

#시간복잡도 O(1)