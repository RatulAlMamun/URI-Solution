try:
    read = False
    while True:
        code = input()
        if "<body>" in code: 
            read = True
        elif "</body>" in code:
            read = False
        elif read:
            print(code) 
except EOFError:
    pass