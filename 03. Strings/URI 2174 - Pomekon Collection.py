n = int(input())
pokemon_list = []
for i in range(n):
	pokemon = input()
	pokemon_list.append(pokemon)
	pokemon_set = set(pokemon_list)
print("Falta(m)", 151 - pokemon_set.__len__(), "pomekon(s).")