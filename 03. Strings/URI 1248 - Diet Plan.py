N = int(input())
for _ in range(N):
    diet = input()
    breakfast = input()
    lunch = input()
    cheater = False
    
    for food in breakfast:
        if food in diet:
            diet = diet.replace(food, '')
        else:
            cheater = True
    
    for food in lunch:
        if food in diet:
            diet = diet.replace(food, '')
        else:
            cheater = True
    
    if cheater:
        print("CHEATER")
    else:
        print(''.join(sorted(diet)))