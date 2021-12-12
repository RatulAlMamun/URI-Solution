Cw, Cd, Cg, Fw, Fd, Fg = map(int, input().split())
C = Cw * 3 + Cd
F = Fw * 3 + Fd
if C == F:
	if Cg == Fg:
		print('=')
	elif Cg > Fg:
		print ('C')
	else:
		print('F')
elif C > F:
	print('C')
else:
	print('F')