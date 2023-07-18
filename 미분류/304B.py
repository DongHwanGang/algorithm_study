N = int(input())
temp = 0
if N <= 10**3-1:
    temp = 0
elif N <= 10**4-1:
    temp = N % 10
elif N <= 10**5-1:
    temp = N % 100
elif N <= 10**6-1:
    temp = N % 1000
elif N <= 10**7-1:
    temp = N % 10000
elif N <= 10**8-1:
    temp = N % 100000
else:
    temp = N % 1000000

print(N -temp)
