while True:
    A, D = map(int, input().split())
    if A == 0 and D == 0:
        break
    attackers = sorted(list(map(int, input().split())))
    defenders = sorted(list(map(int, input().split())))
    
    if all(defenders[1] <= attacker for attacker in attackers):
        print('N')
    else:
        print('Y')
