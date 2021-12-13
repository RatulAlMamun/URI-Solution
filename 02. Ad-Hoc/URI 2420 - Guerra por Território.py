N = int(input())
sectionList = list(map(int, input().split()))
totalSectionArea = sum(sectionList)
halfArea = totalSectionArea // 2
count = 0
for i in sectionList:
    if halfArea <= 0:
        break
    halfArea -= i
    count += 1
print(count)