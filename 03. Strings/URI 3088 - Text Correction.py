while True:
    try:
        text = input()
        i = 0
        while i < len(text):
            if (text[i] == ' '):
                if (text[i + 1] == ',' or text[i + 1] == '.'):
                    print(text[i + 1], end='')
                    i = i + 1
                else:
                    print(text[i], end='')
            else:
                print(text[i], end='')
            i = i + 1
        print()
    except EOFError:
        break