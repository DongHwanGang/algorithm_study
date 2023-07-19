#메인 함수
def main() -> None:
    T = int(input())
    convertToBinary(T)
#소수 decimal -> 이진수로 변경하는 함수
def convertToBinary(num: int) -> None:
    for i in range(num):
        target = float(input())
        flag = 0.5
        calc = 0
        answer = ""
        while calc <= 12 and target > 0:
            temp = target - flag
            if temp >= 0:
                target = temp
                answer = answer + "1"
            else:
                answer = answer + "0"
            calc += 1
            flag = flag * 0.5
        
        if calc > 12:
            print("#%d overflow" %(i+1))
        else:
            print("#%d %s" %(i+1, answer))

if __name__ == "__main__":
    main()