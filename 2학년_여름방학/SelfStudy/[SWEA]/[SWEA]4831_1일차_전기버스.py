def main() -> None:
    T: int = int(input())
    bus_station(T)

def bus_station(num: int)->None:
    K: int = 0
    N: int = 0
    M: int = 0
    progress: int = 0
    charge_num: int = 0
    temp: int = 0
    station: list = None
    charge_station: list = None
    flag: bool = None

    for i in range(num):
        K, N, M = list(map(int, input().split()))
        station = [0]*(N + 1)
        charge_station = list(map(int, input().split()))
        for j in charge_station:
            station[j] = 1

        temp = K
        flag = True
        progress = 0
        charge_num = 0
        while progress < N:
            if progress+temp < N and station[progress + temp] == 1:
                progress += temp
                charge_num += 1
                temp = K
            elif progress+temp >= N:
                break
            else:
                temp -= 1
                if temp <= 0:
                    flag = False
                    break
        
        if flag:
            print("#%d %d" %(i+1, charge_num))
        else:
            print("#%d %d" %(i+1, 0))

if __name__ == "__main__":
    main()