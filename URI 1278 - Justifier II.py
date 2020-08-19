test = int(input())
firt_test = True
while True:
    if test == 0:
        break
    if firt_test:
        firt_test = False
    else:
        print()
    sentence_group = []
    length = -1
    for i in range(test):
        sentence = input()
        sentence = " ".join(sentence.split())
        sentence_group.append(sentence)
        if length < len(sentence):
            length = len(sentence)
    for i in range(test):
        print(sentence_group[i].rjust(length))
    test = int(input())