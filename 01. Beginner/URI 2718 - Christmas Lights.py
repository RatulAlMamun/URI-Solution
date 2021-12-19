def decimalToBinary(n):  
    return bin(n).replace("0b", "")
N = int(input())
for _ in range(N):
    x = int(input())
    x = decimalToBinary(x)
    count = 0
    curr_count = 0
    for i in x:
        if i == "1":
            curr_count = curr_count + 1
        else:
            if count < curr_count:
                count = curr_count
            curr_count = 0
    if count < curr_count:
        count = curr_count
    print(count)