N = int(input())
hobbits = humans = elves = dwarves = magicians = 0
for _ in range(N):
    a, b = map(str, input().split())
    if b == 'A':
        dwarves += 1
    elif b == 'E':
        elves += 1
    elif b == 'H':
        humans +=1
    elif b == 'M':
        magicians += 1
    elif b == 'X':
        hobbits += 1  
print(hobbits, "Hobbit(s)")
print(humans, "Humano(s)")
print(elves, "Elfo(s)")
print(dwarves, "Anao(s)")
print(magicians, "Mago(s)")