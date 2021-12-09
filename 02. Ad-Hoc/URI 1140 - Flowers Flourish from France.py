try:
    while True:
        line = input()
        if line == "*":
            break
        line = line.lower()
        words = line.split()
        check_flag = words[0][0]

        for i in words:
            if i[0] != check_flag:
                result = "N"
                break
            else:
                result = "Y"
        print(result)
        
except EOFError:
    pass