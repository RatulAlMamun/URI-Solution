def printTime(time):
    if time < 10:
        return '0' + str(time)
    return str(time)

def printDay(time):
    if time < 6:
        return 'De Madrugada!!'
    elif time < 12:
        return 'Bom Dia!!'
    elif time < 18:
        return 'Boa Tarde!!'
    else:
        return 'Boa Noite!!'

while True:
    try:
        deg = float(input())
        second = deg * 240 + 21600
        minute = second // 60
        second = int(second % 60)
        hour = int((minute // 60) % 24)
        minute = int(minute % 60)
        print(printDay(hour))
        print(printTime(hour) + ':' + printTime(minute) + ':' + printTime(second))
    except EOFError:
        break