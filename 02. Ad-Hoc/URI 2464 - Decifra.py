code = input()
msg = input()
for i in msg:
    index = code.find(i)
    print(chr(index + 97), end="")
print()