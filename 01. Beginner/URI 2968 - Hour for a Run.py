import math
V, N = map(int, input().split())
one     = int(math.ceil(V * N * 0.1))
two     = int(math.ceil(V * N * 0.2))
three   = int(math.ceil(V * N * 0.3))
four    = int(math.ceil(V * N * 0.4))
five    = int(math.ceil(V * N * 0.5))
six     = int(math.ceil(V * N * 0.6))
seven   = int(math.ceil(V * N * 0.7))
eight   = int(math.ceil(V * N * 0.8))
nine    = int(math.ceil(V * N * 0.9))
print("%d %d %d %d %d %d %d %d %d" %(one, two, three, four, five, six, seven, eight, nine))