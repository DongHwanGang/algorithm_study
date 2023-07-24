def main()->None:
    paper_continue(int(input()))

def paper_continue(T: int) -> None:
    arr = used_paper()
    for test_case in range(T):
        paper = int(input())//10
        print("#%d %d" %(test_case + 1, arr[paper]))

def used_paper()->list:
    used_paper = 0
    save = 0
    save_list = [0]
    for i in range(1, 30 + 1):
        if i % 2:
            used_paper = save + 1
        else:
            used_paper = save + 2
        save += used_paper
        save_list.append(used_paper)
    return save_list

if __name__ == "__main__":
    main()