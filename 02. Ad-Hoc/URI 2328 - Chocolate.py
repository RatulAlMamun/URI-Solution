N = int(input())
pieceList = map(int, input().split())
pieceList = [x - 1 for x in pieceList]
print(sum(pieceList))