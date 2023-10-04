player, rounds = map(int, input().split())
points = list(map(int, input().split()))
playerPoint = [0] * player
for i in range(player * rounds):
    playerPoint[i % player] += points[i]
print(len(playerPoint) - playerPoint[::-1].index(max(playerPoint)))