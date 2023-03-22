def sum_day(year, month, day):
    arr_month = [31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31]
    sum_days = sum(arr_month[0:month]) + day
    
    if month > 2:
        if year % 4 == 0:
            if year % 400 != 0 and year % 100 == 0:
                pass
            else:
                sum_days += 1

    return sum_days
           
year1, month1, day1 = map(int, input().split())
year2, month2, day2 = map(int, input().split())

if year2 - year1 > 1000 or (year2 - year1 >= 1000 and month2 >= month1 and day2 >= day1):
    print('gg')
    exit()

sum_days1 = sum_day(year1, month1, day1)
sum_days2 = sum_day(year2, month2, day2)

if sum_days2 - sum_days1 < 0:
    year2 = year2 - 1
    sum_days2 = sum_day(year2, 13, sum_days2)

if year2 - year1 > 0:
    for i in range(year2, year1, -1):
        sum_days2 = sum_day(i, 13, sum_days2)

print('D-{0}'.format(sum_days2 - sum_days1))    