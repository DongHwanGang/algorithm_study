import sys
input = sys.stdin.readline

while(True):
    inputstr = input().rstrip()
    if(inputstr == "#"):
        break
    else:
        temp = 0
        for c in inputstr:
            c = c.lower()
            if c == "a" or c == "e" or c == "i" or c == "o" or c == "u":
                temp += 1
        print(temp)