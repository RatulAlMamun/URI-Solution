def josephus(n, k):
    remaining = 0;
    for i in range(1, n):
        remaining = (remaining + k) % i;
    return remaining;

while True:
    N = int(input())
    if N == 0:
        break
    m = 1
    while True:
        if (josephus(N, m) != 11):
            m = m + 1
        else:
            break
    print(m)