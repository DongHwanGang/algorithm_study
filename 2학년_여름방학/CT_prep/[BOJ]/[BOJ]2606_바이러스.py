def main() -> None:
    worm_virus(int(input()))

def worm_virus(computer_numbers: int) -> None:
    computer_link: list = [[] for i in range(computer_numbers + 1)]
    visited: list = [False]* (computer_numbers + 1)
    queue: list = []
    answer: int = 0

    for input_number in range(int(input())):
        front_computer, rear_computer = map(int, input().split())
        computer_link[front_computer].append(rear_computer)
        computer_link[rear_computer].append(front_computer)
    
    visited[1] = True
    queue.append(1)

    while queue:
        before_computer = queue.pop(0)
        for computer in computer_link[before_computer]:
            if visited[computer] != False:
                continue
            visited[computer] = True
            answer += 1
            queue.append(computer)
    print(answer)

if __name__=="__main__":
    main()