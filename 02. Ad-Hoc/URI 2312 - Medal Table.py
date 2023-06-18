N = int(input())
countries = [];
for _ in range(N):
    country = list(map(str, input().split()))
    countries.append([country[0], int(country[1]), int(country[2]), int(country[3])])
countries = sorted(countries, key = lambda x: (-x[1], -x[2], -x[3], x[0]))
for country in countries:
    print(*country, sep = " ")
