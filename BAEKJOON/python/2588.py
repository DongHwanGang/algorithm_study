a = int(input())
b = int(input())
rest = 0
ten = 1
num = []
i = 0

while b > 0:
    rest = b % 10 * ten
    num.append(a * rest)
    print(num[i] // ten)
    i += 1
    ten *= 10
    b //= 10
    
print(sum(num))
