import sys
input = sys.stdin.readline
#입력 부
n = int(input().rstrip())
arr = list(map(int, input().rstrip().split()))
m = int(input().rstrip())
temp = list(map(int, input().rstrip().split()))
#먼저 입력 받은 배열 정렬
arr.sort()
for i in temp:
		#이진 탐색
    front = 0
    back = len(arr) - 1
		#다 돌았는데 못 찾았을 경우 대비 bool값 선언
    check = False
    while front <= back:
        middle = (front + back) // 2
        if arr[middle] == i:
            check = True
            print(1)
            break
        else:
            if arr[middle] > i:
                back = middle - 1
            else:
                front = middle + 1
    if check == False:
        print(0)