from difflib import SequenceMatcher
while True:
    try:
        string1 = input()
        string2 = input()
        s = SequenceMatcher(None, string1, string2)
        match = s.find_longest_match(0, len(string1), 0, len(string2))
        print(match.size)
    except EOFError:
        break