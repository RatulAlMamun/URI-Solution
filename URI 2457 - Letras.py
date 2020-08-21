letter = input()
text = list(map(str, input().split()))
textLength = len(text)
wordWithLetter = 0
for i in text:
    if letter in i:
        wordWithLetter = wordWithLetter + 1
print("%.1f" %((wordWithLetter * 100)/textLength))