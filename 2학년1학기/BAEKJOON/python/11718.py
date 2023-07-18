arr = []

while True:
    try:
        s = input()
        arr.append(s)
    except EOFError:
        break

for i in arr:
    print(i)