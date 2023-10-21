def isLeapYear(year):
    return (year % 4 == 0 and year % 100 != 0) or (year % 400 == 0)
lineBreak = False
while True:
    try:
        year = int(input())
        if lineBreak:
            print()
        lineBreak = True
        festival = False
        if isLeapYear(year):
            festival = True
            print('This is leap year.')
        if year % 15 == 0:
            festival = True
            print('This is huluculu festival year.')
        if year % 55 == 0 and isLeapYear(year):
            festival = True
            print('This is bulukulu festival year.')
        if not festival:
            print('This is an ordinary year.')
    except EOFError:
        break