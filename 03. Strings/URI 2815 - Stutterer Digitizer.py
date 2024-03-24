def repetitions(inputText):
    for i in range(0, len(inputText) - 2):
        if i - 1 < len(inputText) and i - 1 >= 0:
            if inputText[i-1:i+1] == inputText[i+1:i+3]:
                inputText = inputText.replace(inputText[i-1:i+1], '', 1)
    return inputText
sentence = input().split()
result = []
for word in sentence:
    result.append(repetitions(word))
print(" ".join(result))
