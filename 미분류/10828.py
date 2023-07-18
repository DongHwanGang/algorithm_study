import sys
input = sys.stdin.readline

N = int(input())
stack = []
size = 0
for _ in range(N):
    control = input().split()
    if control[0] == "push":
        stack.append(int(control[1]))
        size += 1

    elif control[0] == "top":
        if size == 0:
            print(-1)
        else:
            print(stack[-1])

    elif control[0] == "pop":
        if size == 0:
            print(-1)
        else:
            print(stack[-1])
            stack.pop()
            size -= 1

    elif control[0] == "empty":
        if size == 0:
            print(1)
        else:
            print(0)
    else:
        print(size)