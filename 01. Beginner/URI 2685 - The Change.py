while True:
    try:
        M = int(input())
        if M == 360 or (M >= 0 and M < 90):
            print("Bom Dia!!")
        elif M >= 90 and M < 180:
            print("Boa Tarde!!")
        elif M >= 180 and M < 270:
            print("Boa Noite!!")
        elif M >= 270 and M < 360:
            print("De Madrugada!!")
    except EOFError:
        break