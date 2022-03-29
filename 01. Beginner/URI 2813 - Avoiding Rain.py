N = int(input())
purchaseForHome = 0
purchaseForOffice = 0
homeUmbrella = 0
officeUmbrella = 0
for _ in range(N):
    homeToOffice, officeToHome = input().split()
    if homeToOffice == "chuva" and homeUmbrella == 0:
        purchaseForHome += 1
        officeUmbrella += 1
    elif homeToOffice == "chuva" and homeUmbrella > 0:
        officeUmbrella += 1
        homeUmbrella -= 1
    
    if officeToHome == "chuva" and officeUmbrella == 0:
        purchaseForOffice += 1
        homeUmbrella += 1
    elif officeToHome == "chuva"  and officeUmbrella > 0:
        homeUmbrella += 1
        officeUmbrella -= 1

print(purchaseForHome, purchaseForOffice)