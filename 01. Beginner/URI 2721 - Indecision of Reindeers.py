Reindeers = ['Rudolph', 'Dasher', 'Dancer', 'Prancer', 'Vixen', 'Comet', 'Cupid', 'Donner', 'Blitzen']
sonwballs = list(map(int, input().split()))
print(Reindeers[sum(sonwballs) % 9])