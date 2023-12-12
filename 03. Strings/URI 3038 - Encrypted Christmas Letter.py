try:
    while True:
        encrypt = input()
        keys = {'@': 'a', '&': 'e', '!': 'i', '*': 'o', '#': 'u'}
        decrypt = ''.join(keys[char] if char in keys else char for char in encrypt)
        print(decrypt)
except EOFError:
    pass