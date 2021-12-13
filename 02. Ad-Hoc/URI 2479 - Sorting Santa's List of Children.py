numberOfChildren = int(input())
childrenList = []
behavedChildren = 0
misBehavedChildren = 0
for _ in range(numberOfChildren):
    childrenName = input()
    children = childrenName.split()
    childrenList.append(children[1])
    if children[0] == "+":
        behavedChildren += 1
    else:
        misBehavedChildren += 1    
childrenList = sorted(childrenList)
for children in childrenList:
    print(children) 
print("Se comportaram:", behavedChildren, "| Nao se comportaram:", misBehavedChildren)