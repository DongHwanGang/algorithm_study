import sys
input = sys.stdin.readline

def main() -> None:
    N, M = map(int, input().rstrip().split())
    section: list = list(map(int, input().rstrip().split()))
    get_the_value(DP(section), M)

def DP(section: list) -> list:
    temp_list: list = list()
    element: int = 0

    for i in section:
        element = element + i
        temp_list.append(element)
    
    return temp_list

def get_the_value(sum_section: list, M) -> None:
    i: int = 0
    j: int = 0

    for repeat in range(M):
        i, j = map(int, input().rstrip().split())
        if i == 1:
            print(sum_section[j - 1])
        else:
            print(sum_section[j - 1] - sum_section[i - 2])

if __name__ == "__main__":
    main()