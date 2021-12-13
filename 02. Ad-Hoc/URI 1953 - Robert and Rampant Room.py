try:
    while True:
        n = int(input())
        subjectList = []
        EPR = 0
        EHD = 0
        INTRUSOS = 0
        for _ in range(n):
            registrationNo, subject = map(str, input().split())
            subjectList.append(subject)
        for subject in subjectList:
            if subject == "EPR":
                EPR = EPR + 1
            elif subject == "EHD":
                EHD = EHD + 1
            else:
                INTRUSOS = INTRUSOS + 1
        print("EPR:", EPR)
        print("EHD:", EHD)
        print("INTRUSOS:", INTRUSOS)
except EOFError:
    pass