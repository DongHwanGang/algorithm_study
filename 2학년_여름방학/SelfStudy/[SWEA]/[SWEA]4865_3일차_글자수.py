def main() -> None:
    char_number(int(input()))

def char_number(T: int) -> None:
    char: list = []
    check: list = []
    str1: str = ""
    str2: str = ""
    test_case: int = 0 #테스트 케이스 반복문
    char_input: str = ""
    tmp: int = 0
    for test_case in range(T):
        str1 = input()
        str2 = input()
        char = [False]*26
        check = [0]*26
        for char_input in str1:
            char[ord(char_input) - ord("A")] = True
        for char_input in str2:
            tmp = ord(char_input) - ord("A")
            if char[tmp]:
                check[tmp] += 1
        print("#%d %d" %(test_case + 1, max(check)))

if __name__ == "__main__":
    main()