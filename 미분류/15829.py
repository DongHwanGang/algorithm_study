length = int(input())
strarr = list(input())
answer = 0

for i in range(length):
    answer = answer + (ord(strarr[i]) - ord('a') + 1)*(31**i)
#ord()함수는 유니코드를 해당하는 정수로 바꿔줌 26
print(answer%1234567891)# 마지막 모듈러 연산 안 하면 50점