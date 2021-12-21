testcase = int(input())
while testcase:
    guess1 = input()
    guess2 = input()
    puzzle = input()
    position = [pos for pos, char in enumerate(puzzle) if char == '_']
    if (guess1[position[0]] == guess2[position[1]] or guess1[position[1]] == guess2[position[0]]) or (guess1[position[0]] == guess2[position[0]] and guess1[position[1]] == guess2[position[1]]):
        print('Y')
    else: 
        print('N')
    testcase = testcase - 1