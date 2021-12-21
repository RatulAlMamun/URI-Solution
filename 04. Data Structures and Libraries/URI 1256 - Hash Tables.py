test = int(input())
while test:
    secret_key, data_number = map(int, input().split())
    data = list(map(int, input().split()))
    hash_table = []
    for i in range(secret_key):
        hash_table.append([])
    for x in data:
        hash_table[x % secret_key].append(x)
    for y in range(secret_key):
        print(y, "->", end="")
        temp = hash_table[y]
        if len(temp) == 0:
            print(" \\")
        else:
            for z in range(len(temp)):
                print(" " + str(temp[z]), "->", end="")
            print(" \\")
    if test != 1:
        print()
    test = test - 1