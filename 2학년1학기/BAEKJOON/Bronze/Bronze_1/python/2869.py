A, B, V = map(int, input().split())
tempDay = V - A
Lastday = A - B
tempAnswer = tempDay // Lastday
tempRest = tempDay % Lastday

if tempRest != 0:
    tempAnswer += 1

print(tempAnswer + 1)
