num = int(input())
arr = [0]*10

while num > 0:
    if num % 10 == 6 or num % 10 == 9:
        if arr[6] <= arr[9]:
            arr[6] += 1
        else:
            arr[9] += 1
    else:
        arr[num%10] += 1

    num //= 10

print(max(arr))
