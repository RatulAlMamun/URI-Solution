testcase = int(input())
for i in range(testcase):
	people_lan = []
	people = int(input())
	for j in range(people):
		people_lan.append(input())
	if(people_lan.count(people_lan[0]) == len(people_lan)):
		print(people_lan[0])
	else:
		print("ingles")