import sys
input = sys.stdin.readline

def main() -> None:
    N: int = int(input().rstrip())
    min_heap(N)

def min_heap(num: int) -> None:
    length: int = 0
    heap: list = [0]
    in_num: int = 0
    delete: int = 0
    for i in range(num):
        in_num = int(input().rstrip())
        if in_num == 0 and length == 0:
            print(0)
        elif in_num == 0 and length != 0:
            delete = heap[1]
            print("%d" %delete)
            heap = delete_heap(heap, delete, length)
            length = length - 1
        else:
            heap = insert_heap(heap, in_num, length)
            length += 1
            
def insert_heap(heap: list, data: int, length: int) -> list:
    parent: int = length + 1

    while parent != 1 and data > heap[parent//2]:
        heap[parent] = heap[parent//2]
        parent //= 2
    heap[parent] = data

    return heap

def delete_heap(heap: list, delete: int, length: int) -> list:
    child: int = 2
    last: int = heap[length + 1]
    while child <= length:
        if child < length and heap[child] < heap[child+1]:
            child += 1
        if last >= heap[child]:
            break
        heap[child//2] = heap[child]
        child *=2
    heap[child//2] = last
    
if __name__ == "__main__":
    main()