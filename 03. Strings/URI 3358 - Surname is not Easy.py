def isConsonant(ch):
    str = "aeiouAEIOU"
    return (str.find(ch) == -1)

N = int(input())
for _ in range(N):
    name = input()
    consonant = 0
    easy = True
    for ch in name:
        if isConsonant(ch):
            consonant += 1
            if (consonant == 3):
                easy = False
                break
        else:
            consonant = 0
    print((name + " nao eh facil", name + " eh facil")[easy])
            