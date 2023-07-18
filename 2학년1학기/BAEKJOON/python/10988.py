s = input()
strlen = len(s)

start = 0
end = -1
answer = 1

for i in range(strlen // 2):
    if s[start] == s[end]:
        start += 1
        end -= 1
    else:
        answer = 0
        break

print(answer)