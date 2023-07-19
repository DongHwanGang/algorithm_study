#메인 함수
def main():
    T = int(input())
    convertToDecimal(T)
    
#16진수 숫자 하나를 십진수로 바꾸는 함수    
def convertToDecimal(T):
    for i in range(T):
        figures, hexNum = input().split()
        answer = ""
        for num in hexNum:
            if num == "A":
                num = 10
            elif num == "B":
                num = 11
            elif num == "C":
                num = 12
            elif num == "D":
                num = 13
            elif num == "E":
                num = 14
            elif num == "F":
                num = 15
            else:
                num = int(num)
            answer = answer + convertToBinary(num)
        print("#%d %s" %(i+1, answer))

#십진수 숫자를 이진수로 바꾸는 함수
def convertToBinary(num):
    idx = 0
    temp_answer = ['0']*4
    answer = ""
    while idx < 4:
        temp = num % 2
        num = num // 2
        if temp != 0:
            temp_answer[idx] = str(temp)
        idx += 1
    for char in range(3, -1, -1):
        answer = answer + temp_answer[char]
    return answer

if __name__ == "__main__":
    main()