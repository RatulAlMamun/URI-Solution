while True:
	N, M = map(int, input().split())
	if N == M == 0:
		break
	ticketSerialList = list(map(int, input().split()))
	totalTicket = [0]*(N+1)
	count = 0
	for ticket in ticketSerialList:
		totalTicket[ticket] = totalTicket[ticket] + 1
	for i in totalTicket:
		if i > 1:
			count = count + 1
	print(count)