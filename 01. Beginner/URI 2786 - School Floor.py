length = int(input())
width = int(input())

type_one = (length * width) + ((length - 1) * (width - 1))
type_two = ((length - 1) * 2) + ((width - 1) * 2)

print(type_one)
print(type_two)