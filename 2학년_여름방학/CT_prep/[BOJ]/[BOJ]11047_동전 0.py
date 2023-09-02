def main() -> int:
    N: int
    K: int
    N, K = map(int, input().split())
    coin(N, K)
    return 0

def coin(N: int, K: int) -> None:
    coin_kinds: list = [int(input()) for kind in range(N)] # 동전의 종류를 입력 받는 리스트
    temp_answer: int = 0 # 동전의 개수를 계산하면서 임시 저장할 코인의 개수
    answer: int = 0 # 답이 될 수 있는 동전의 개수를 저장
    coin_num: int = 0 # 동전의 종류 별 개수를 저장할 변수
    temp_K: int = 0 # K를 복사해주기 위한 변수
    flag: bool = False # K원이 만들어졌는지 확인하는 변수

    # 가장 가치가 큰 동전부터 K의 값과 비교하여 연산하는 반복문
    for i in range(N - 1, -1, -1):
        temp_answer = 0 
        temp_K = K 
        flag = False
        for j in range(i, -1, -1):
            coin_num = temp_K // coin_kinds[j] # 남은 K 값 / 코인의 종류
            temp_answer = temp_answer + coin_num
            temp_K = temp_K - coin_num * coin_kinds[j]
            if not temp_K:
                flag = True
                break

        if flag:
            if not answer:
                answer = temp_answer
            else:
                answer = temp_answer if temp_answer < answer else answer

    print(answer)

if __name__=="__main__":
    main()