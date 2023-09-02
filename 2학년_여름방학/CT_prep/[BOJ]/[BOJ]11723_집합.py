import sys
from collections import deque
input = sys.stdin.readline

def main() -> int:
    M: int = int(input().rstrip())
    set_list: deque = deque([0]*20)
    set_len: int = 0
    control: str = ""
    number: str = ""

    for i in range(M):
        control = input().rstrip().split()
        
        if len(control) == 2:
            number = int(control[1])

            if control[0] == "add":
                if not set_list[number - 1]:
                    set_list, set_len = add(set_list, set_len, number)

            elif control[0] == "remove":
                if set_list[number - 1]:
                    set_list, set_len = remove(set_list, set_len, number)
            
            elif control[0] == "check":
                print(1) if set_list[number - 1] else print(0)
            
            elif control[0] == "toggle":
                if set_list[number - 1]:
                    set_list, set_len = remove(set_list, set_len, number)
                else:
                    set_list, set_len = add(set_list, set_len, number)
        else:
            if control[0] == "all":
                set_list = deque([1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1])
                set_len = 20

            else:
                set_list = deque([0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0])
                set_len = 0

    return 0

def add(set_list: deque, set_len: int, number: int) -> tuple:
    set_list[number - 1] = 1
    set_len += 1
    return set_list, set_len

def remove(set_list: deque, set_len: int, number: int) -> list:
    set_list[number - 1] = 0
    set_len -= 1
    return set_list, set_len

if __name__=="__main__":
    main()