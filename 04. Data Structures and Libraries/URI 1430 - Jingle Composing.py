while True:
    composition = input()
    if composition == "*":
        break
    singleToneList = composition.split('/')
    toneDefiner = { 
        "W": 1, 
        "H": 0.5, 
        "Q": 0.25, 
        "E": 0.125,
        "S": 0.0625,
        "T": 0.03125,
        "X": 0.015625
    }
    result = 0
    for tone in singleToneList:
        duration = 0
        for t in tone:
            duration += toneDefiner[t]
        if duration == 1.000000:
            result += 1
    print(result)