def main() -> None:
    for i in range(int(input())):
        calendar()

def calendar() -> None:
    M, N, x, y = map(int, input().split())
    g = M * N // Euclidean(M, N)

    tempx = x
    tempy = y

    if tempx == M and tempy == N:
        print(g)
        return
    else:
        while tempx <= g and tempy <= g:
            if tempx == tempy:
                print(tempx)
                return
            else:
                if tempx < tempy:
                    tempx += M
                else:
                    tempy += N
        print(-1)

def Euclidean(a: int, b: int) -> int:
    while b != 0:
        [a, b] = [b, a%b]
    return a

if __name__ == "__main__":
    main()