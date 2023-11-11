grades = list(map(float, input().split()))
grades.sort()
print("{:.1f}".format(sum(grades[1:-1])))