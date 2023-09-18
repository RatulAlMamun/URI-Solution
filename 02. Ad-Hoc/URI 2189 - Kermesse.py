testcase = 1
while True:
    N = int(input())
    if N == 0:
        break
    ticket = list(map(int, input().split()))
    print("Teste", testcase)
    for i in range(len(ticket)):
        if i + 1 == ticket[i]:
            print(ticket[i])
            print()
            testcase += 1
            break
