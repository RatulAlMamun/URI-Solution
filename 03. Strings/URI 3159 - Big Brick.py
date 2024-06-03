keypad = {
    'a': '2', 'b': '22', 'c': '222',
    'd': '3', 'e': '33', 'f': '333',
    'g': '4', 'h': '44', 'i': '444',
    'j': '5', 'k': '55', 'l': '555',
    'm': '6', 'n': '66', 'o': '666',
    'p': '7', 'q': '77', 'r': '777', 's': '7777',
    't': '8', 'u': '88', 'v': '888',
    'w': '9', 'x': '99', 'y': '999', 'z': '9999'
}
N = int(input())
for _ in range(N):
    msg = input()
    prev = '0'
    for letter in msg:
        if letter == ' ':
            print('0', end='')
            prev = '0'
        elif letter.isupper():
            print('#', end='')
            print(keypad[letter.lower()], end='')
            prev = keypad[letter.lower()][0]
        else:
            if prev == keypad[letter][0]:
                print('*', end='')
            print(keypad[letter], end='')
            prev = keypad[letter][0]
    print()
    