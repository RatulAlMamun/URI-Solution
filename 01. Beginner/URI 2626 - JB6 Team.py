def isDraw(a, b, c):
    if a=="pedra" and b=="pedra" and c=="pedra":
        return True
    if a=="papel" and b=="papel" and c=="papel":
        return True
    if a=="tesoura" and b=="tesoura" and c=="tesoura":
        return True
    if a=="pedra" and b=="papel" and c=="tesoura":
        return True
    if a=="pedra" and b=="tesoura" and c=="papel":
        return True
    if a=="papel" and b=="pedra" and c=="tesoura":
        return True
    if a=="papel" and b=="tesoura" and c=="pedra":
        return True
    if a=="tesoura" and b=="papel" and c=="pedra":
        return True
    if a=="tesoura" and b=="pedra" and c=="papel":
        return True
    if a=="tesoura" and b=="tesoura" and c=="papel":
        return True
    if a=="tesoura" and b=="papel" and c=="tesoura":
        return True
    if a=="papel" and b=="tesoura" and c=="tesoura":
        return True
    if a=="papel" and b=="papel" and c=="pedra":
        return True
    if a=="papel" and b=="pedra" and c=="papel":
        return True
    if a=="pedra" and b=="papel" and c=="papel":
        return True
    if a=="pedra" and b=="pedra" and c=="tesoura":
        return True
    if a=="pedra" and b=="tesoura" and c=="pedra":
        return True
    if a=="tesoura" and b=="pedra" and c=="pedra":
        return True
    return False

def isWinner(a, b, c):
    if a=="tesoura" and b=="papel" and c=="papel":
        return True
    if a=="pedra" and b=="tesoura" and c=="tesoura":
        return True
    if a=="papel" and b=="pedra" and c=="pedra":
        return True
    return False

while True:
    try:
        dodo, leo, pepper = map(str, input().split())
        if isDraw(dodo, leo, pepper): 
	        print("Putz vei, o Leo ta demorando muito pra jogar...")
        elif isWinner(dodo, leo, pepper): 
            print("Os atributos dos monstros vao ser inteligencia, sabedoria...")
        elif isWinner(leo, dodo, pepper):
	        print("Iron Maiden's gonna get you, no matter how far!")
        elif isWinner(pepper, leo, dodo):
	        print("Urano perdeu algo muito precioso...")
    except EOFError:
        break