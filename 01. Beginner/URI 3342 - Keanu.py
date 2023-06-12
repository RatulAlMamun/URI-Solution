n = int(input())
if n % 2 == 0:
  white = black = (n * n) / 2
else:
  black = (n * n) // 2
  white = black + 1
print("%d casas brancas e %d casas pretas"% (white, black))