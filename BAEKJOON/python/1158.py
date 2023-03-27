import sys
input = sys.stdin.readline

a, b = map(int, input().split())

first_list = [i for i in range(1, a+1)]
answer_list = []

start = 0
end = b - 1

while(len(first_list)):
    for i in range(end):
        if(start < len(first_list) - 1):
            start+=1
        else:
            start = 0;
    answer_list.append(first_list[start]);
    del first_list[start];
    if start > len(first_list) - 1:
        start = 0;
print("<", end = "")
for i in answer_list:
    if(i != answer_list[len(answer_list) - 1]):
        print(i, end = ", ")
    else:
        print(i, end = "")
print(">")