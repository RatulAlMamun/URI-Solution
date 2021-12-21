testCase = int(input())
while testCase:
    password = input()
    password = password.lower()
    combination = 1
    for i in password:
        if i == "a" or i == "e" or i == "i" or i == "o" or i == "s":
            combination = combination * 3
        else:
            combination = combination * 2
    print(combination)
    testCase = testCase - 1