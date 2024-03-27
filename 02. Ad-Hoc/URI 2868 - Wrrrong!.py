testcase = int(input())
for _ in range(testcase):
    expression = input().split()
    operation = expression[1]
    operand1 = int(expression[0])
    operand2 = int(expression[2])
    result = int(expression[4])
    if operation == '+':
        originalResult = operand1 + operand2
    elif operation == '-':
        originalResult = operand1 - operand2
    elif operation == 'x':
        originalResult = operand1 * operand2
    print('E' + ('r' * abs(originalResult - result)) + 'ou!')