row, col = map(int, input().split())
cell = []
maximum = 0
for i in range(row):         
    a = list(map(int, input().split()))
    cell.append(a)
for i in range(row):
    s = sum(cell[i])
    if s > maximum:
        maximum = s
for i in range(col):
    s = sum([val[i] for val in cell])
    if s > maximum:
        maximum = s
print(maximum)