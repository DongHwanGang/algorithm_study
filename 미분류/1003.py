def fibonacci(n):
    if n == 0:
        print("0", end="")
        return 0
    elif n == 1:
        print("1", end="")
        return 1
    else:
        return fibonacci(n-1) + fibonacci(n-2)

print(fibonacci(3))
