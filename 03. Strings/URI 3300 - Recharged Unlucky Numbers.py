N = input()
flag13 = False
for i in range(len(N)-1):
    if N[i] == '1' and N[i+1] == '3':
        flag13 = True
        break
if flag13:
    print(N + " es de Mala Suerte")
else:
    print(N + " NO es de Mala Suerte")