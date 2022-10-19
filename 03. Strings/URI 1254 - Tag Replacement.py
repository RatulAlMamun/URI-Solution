import re
while True:
    try:
        tagName = input()
        tagNumber = input()
        statement = input()
        tagNameList = re.findall(r'<(.*?)>', statement)
        tagNumberList = []
        for tag in tagNameList:
            tagIgnoreCase = re.compile(re.escape(tagName), re.IGNORECASE)
            tagNumberList.append(tagIgnoreCase.sub(tagNumber, tag))
        for i in range(len(tagNameList)):
            compiled = re.compile(re.escape(tagNameList[i]), re.IGNORECASE)
            statement = compiled.sub(tagNumberList[i], statement)
        print(statement)
    except EOFError:
        break