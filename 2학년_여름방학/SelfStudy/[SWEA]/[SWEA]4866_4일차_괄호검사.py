def main()->None:
    check_bracket(int(input()))

def check_bracket(T: int)->None:
    for test_case in range(T):
        stack = []
        input_str = input()
        flag = False
        for char in input_str:
            if char == "(" or char == "{":
                stack.append(char)
            elif char == ")" or char == "}":
                if not stack:
                    flag = True
                    break
                else:
                    if char == ")" and stack[-1] == "(":
                        stack.pop(-1)
                    elif char == "}" and stack[-1] == "{":
                        stack.pop(-1)
                    else:
                        flag = True
                        break
        if not flag and not stack:
            print("#%d %d" %(test_case + 1, 1))
        else:
            print("#%d %d" %(test_case + 1, 0))

if __name__ == "__main__":
    main()