import sys
from collections import deque
input = sys.stdin.readline

def main() -> int:
    T: int = int(input())
    for test_case in range(T):
        fashion_king(int(input()))
    return 0

def fashion_king(n: int) -> None:
    dress_list: dict = {}
    answer: int = 0

    for dress_input in range(n):
        dress_name, kind = input().rstrip().split()
        if dress_list.get(kind) == None:
            dress_list[kind] = 1
        else:
            dress_list[kind] += 1

    dress_number = deque(dress_list.values())
    num = len(dress_number)
    queue = deque()
    idx = 0
    
    for value in dress_number:
        queue.append([value, idx, 0])
        idx += 1

    for i in range(num):
        while True:
            temp = 1
            for j in range(i + 1):
                
            answer = answer + temp
            if number_index:
                break

    print(answer)

if __name__=="__main__":
    main()