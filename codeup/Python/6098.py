box = []

for i in range(10):
    box.append(list(map(int, input().split())))

i = 1
j = 1

while True:
    box[i][j] = 9
    if box[i + 1][j] == 1 and box[i][j + 1] == 1:
        break
    
    elif box[i][j + 1] != 1:
        if box[i][j + 1] != 2:
            j += 1
        else:
            j += 1
            box[i][j] = 9
            break
    else:
        if box[i + 1][j] != 2:
            i += 1
        else:
            i += 1
            box[i][j] = 9
            break
        
for i in box:
    for j in i:
        print(j, end = ' ')
    print()
            
