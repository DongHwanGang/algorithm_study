import sys
input = sys.stdin.readline
n = int(input())

answer = []

for i in range(n):
    input_str_1, input_str_2 = input().rstrip().split()
    t_f = True
    for cmp in input_str_1:
        if input_str_1.count(cmp) == input_str_2.count(cmp):
            continue
        else:
            answer.append('Impossible')
            t_f = False
            break
    if t_f == True:
        answer.append('Possible')

for i in answer:
    print(i)