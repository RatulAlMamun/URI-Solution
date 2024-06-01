from datetime import date, timedelta

N = int(input())
jupitarUnit = int(11.9 * 365.25 * N)
saturnUnit = int(29.6 * 365.25 * N)
firstEvent = date(2020, 12, 21)
NJupitarEvent = firstEvent + timedelta(days = jupitarUnit)
NSaturnEvent = firstEvent + timedelta(days = saturnUnit)
print('Dias terrestres para Jupiter =', jupitarUnit)	
print('Data terrestre para Jupiter:', NJupitarEvent)
print('Dias terrestres para Saturno =', saturnUnit)
print('Data terrestre para Saturno:', NSaturnEvent) 