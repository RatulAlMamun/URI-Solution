E, D = map(int, input().split())
if E > D:
    print("Eu odeio a professora!")
elif D - E >= 3:
    print("Muito bem! Apresenta antes do Natal!")
elif E + 2 < 24:
    print("Parece o trabalho do meu filho!\nTCC Apresentado!")
else:
    print("Parece o trabalho do meu filho!\nFail! Entao eh nataaaaal!")