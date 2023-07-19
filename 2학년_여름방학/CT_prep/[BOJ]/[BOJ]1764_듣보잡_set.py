import sys
input = sys.stdin.readline

def main():
    N, M = list(map(int, input().split()))
    p1 = doNot(N)
    p2 = doNot(M)
    p3 = p1 & p2
    print(len(p3))
    p3 = list(p3)
    p3.sort()
    for i in p3:
        print(i)

def doNot(N):
    name = set()
    for i in range(N):
        input_name = input().rstrip()
        name.add(input_name)
    return name

if __name__=="__main__":
    main()