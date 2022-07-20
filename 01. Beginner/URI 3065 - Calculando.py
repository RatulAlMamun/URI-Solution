testCase = 1
while True:
    m = int(input())
    if m == 0:
        break
    else:
        expression = input()
        expRelacedByOperator = expression.replace('+', ' ').replace('-', ' ')
        numbers = expRelacedByOperator.split(' ')
        operators = [x for x in expression if x == '+' or x == '-']
        result = int(numbers[0])
        for i in range(m-1):
            if operators[i] == '+':
                result = result + int(numbers[i + 1])
            else:
                result = result - int(numbers[i + 1])
        print("Teste", testCase)
        print(result)
        print()
        testCase = testCase + 1