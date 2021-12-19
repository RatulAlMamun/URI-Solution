N = int(input())
for i in range(N):
    number, base = map(str, input().split())
    number = number
    if base == "dec":
        print("Case %d:" %( i + 1))
        print(hex(int(number))[2:], "hex")
        print(bin(int(number))[2:], "bin")
    elif base == "bin":
        print("Case %d:" %( i + 1))
        print(int(number, 2), "dec")
        print(hex(int(number, 2))[2:], "hex")
    else:
        print("Case %d:" %( i + 1))
        print(int(number, 16), "dec")
        print(bin(int(number, 16))[2:], "bin")
    print()
