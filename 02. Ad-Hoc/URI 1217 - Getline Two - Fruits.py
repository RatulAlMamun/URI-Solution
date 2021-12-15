N = int(input())
totalTk = 0.00
totalKg = 0
for i in range(1, N + 1):
    totalTk += float(input())
    fruits = list(map(str, input().split()))
    fruitnumber = len(fruits)
    totalKg += fruitnumber
    print("day %d: %d kg" %(i, fruitnumber));
print("%.2f kg by day" %(totalKg / N))
print("R$ %.2f by day" %(totalTk / N))