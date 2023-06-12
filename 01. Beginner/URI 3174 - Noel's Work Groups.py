N = int(input())
bonecosHour = 0
arquitetosHour = 0
musicosHour = 0
desenhistasHour = 0
for _ in range(N):
    name, group, hour = map(str, input().split())
    if group == 'bonecos':
        bonecosHour = bonecosHour + int(hour)
    elif group == 'arquitetos':
        arquitetosHour = arquitetosHour + int(hour)
    elif group == 'musicos':
        musicosHour = musicosHour + int(hour)
    else:
        desenhistasHour = desenhistasHour + int(hour)
print((bonecosHour // 8) + (arquitetosHour // 4) + (musicosHour // 6) + (desenhistasHour // 12))