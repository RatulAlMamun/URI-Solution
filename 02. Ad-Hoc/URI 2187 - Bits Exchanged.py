test = 1
while True:
    V = int(input())
    if V == 0:
        break
    notes = [50, 10, 5, 1]
    result = []
    for note in notes:
        result.append(V // note)
        V = V % note
    print("Teste", test)
    print(*result)
    print()
    test += 1
