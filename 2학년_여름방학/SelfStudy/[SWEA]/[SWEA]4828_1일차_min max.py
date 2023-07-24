def main() -> None:
    T: int = int(input())
    sort_func(T)

def sort_func(num: int) -> None:
    cnt: int = 0
    array: list = None
    for i in range(num):
        cnt = int(input())
        array = list(map(int, input().split()))
        array.sort()
        print("#%d %d" %(i+1, array[-1]-array[0]))

if __name__ == "__main__":
    main()