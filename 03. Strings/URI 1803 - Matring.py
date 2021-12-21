line1 = input()
line2 = input()
line3 = input()
line4 = input()
N = len(line1)
F = int(line1[0] + line2[0] + line3[0] + line4[0])
L = int(line1[N - 1] + line2[N - 1] + line3[N - 1] + line4[N - 1])
C = ""
for i in range(1, N - 1):
    M = int(line1[i] + line2[i] + line3[i] + line4[i])
    character = chr((F * M + L) % 257)
    C += character
print(C)