import sys
input = sys.stdin.readline
N = int(input().rstrip())

for i in range(N):
	answer = 0
	arr = list(map(int, input().rstrip().split()))
	for j in arr:
		if j % 2:
			answer += j
	print(f"#{i+1} {answer}")