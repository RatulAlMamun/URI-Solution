from sys import stdin

for legposition in stdin:
    if legposition == "esquerda\n":
        print("ingles")
    elif legposition == "direita\n":
        print("frances")
    elif legposition == "nenhuma\n":
        print("portugues")
    elif legposition == "as duas\n":
        print("caiu")