while(True):
    try:
        character = 0
        line = 1
        page = 1
        N, L, C = map(int, input().split())
        story = input().split()
        for word in story:
            wordLength = len(word) + int(bool(character))
            if character + wordLength <= C:
                character += wordLength
            else:
                character = len(word)
                line += 1
            if line > L:
                page += 1
                line = 1
        print(page)
    except EOFError:
        break