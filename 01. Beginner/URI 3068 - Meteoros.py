testcase = 1
while True:
    x1, y1, x2, y2 = map(int, input().split())
    if x1 == 0 and y1 == 0 and x2 == 0 and y2 == 0:
        break
    print("Teste", testcase)
    n = int(input())
    count = 0
    while n > 0:
        px, py = map(int, input().split())
        if x1 <= px and px <= x2 and y1 >= py and py >= y2:
            count += 1
        n -= 1
    print(count)
    testcase += 1
