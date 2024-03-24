def alphabetRanges(arr):
    ranges = []
    startIndex = None
    for i, value in enumerate(arr):
        if value:
            if startIndex is None:
                startIndex = i
        elif startIndex is not None:
            ranges.append(chr(startIndex + 97) + ':' + chr(i - 1 + 97))
            startIndex = None
    if startIndex is not None:
        ranges.append(chr(startIndex + 97) + ':' + chr(len(arr) - 1 + 97))
    return ', '.join(ranges)

while True:
    try:
        text = input().strip()
        alphabet = [False] * 26
        for letter in text:
            if (letter >= "a" and letter <= "z"):
                alphabet[ord(letter) - 97] = True
        print(alphabetRanges(alphabet))
    except EOFError:
        break