firstLineKey = "`1234567890-="
secondLineKey = "QWERTYUIOP[]\\"
thirdLineKey = "ASDFGHJKL;'"
fourthLineKey = "ZXCVBNM,./"

while True:
    try:
        inputString = input()
        outputString = ""
        for character in inputString:
            if character in firstLineKey:
                outputString += firstLineKey[firstLineKey.find(character) - 1]
            elif character in secondLineKey:
                outputString += secondLineKey[secondLineKey.find(character) - 1]
            elif character in thirdLineKey:
                outputString += thirdLineKey[thirdLineKey.find(character) - 1]
            elif character in fourthLineKey:
                outputString += fourthLineKey[fourthLineKey.find(character) - 1]
            elif character == " ":
                outputString += " "
        print(outputString)
    except:
        break