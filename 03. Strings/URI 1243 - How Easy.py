try:
    while True:
        statement = input()
        letterCount = 0
        wordCount = 0
        for word in statement.split(' '):
            if word.isalpha():
                letterCount = letterCount + len(word)
                wordCount = wordCount + 1
            elif word[:-1].isalpha() and word[-1] == '.':
                letterCount = letterCount + len(word[:-1])
                wordCount = wordCount + 1
        if wordCount == 0:
            average = 0
        else:
            average = letterCount / wordCount
        if average < 4:
            print(250)
        elif average < 6:
            print(500)
        else:
            print(1000)
except EOFError:
    pass
