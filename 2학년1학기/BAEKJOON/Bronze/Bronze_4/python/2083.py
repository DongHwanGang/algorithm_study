import sys
input = sys.stdin.readline

while True:
    name = input().rstrip()
    age, weight = map(int, input().split())
    if name == "#":
        break
    print(name, end=" ")
    if age > 17 or weight >= 80:
        print("Senior")
    else:
        print("Junior")