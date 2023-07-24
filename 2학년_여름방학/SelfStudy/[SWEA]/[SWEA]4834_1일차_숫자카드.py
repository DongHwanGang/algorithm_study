def main()->None:
    T: int = int(input())
    input_numbers(T)

def input_numbers(num: int)->None:
    number: str = None
    n:int = None
    array: list = None
    many_num: int = None
    card_num: int = None
    idx: int = None
    for i in range(num):
        array = [0]*10
        n = int(input())
        number = input()
        many_num = 0
        card_num = 0
        for char in number:
            idx = ord(char) - ord('0')
            array[idx] += 1

            if array[idx] > many_num:
                card_num, many_num = idx, array[idx]
            elif array[idx] == many_num:
                if idx > card_num:
                    card_num = idx
        print("#%d %d %d" %(i+1, card_num, many_num))
if __name__ == "__main__":
    main()