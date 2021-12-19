def maximum(a, b, c): 
    li = [a, b, c] 
    return max(li)
    
def minimum(a, b, c): 
    li = [a, b, c] 
    return min(li)
    
T = int(input())
for i in range(T):
    conversionType = input()
    R, G, B = map(int, input().split())
    if conversionType == "max":
        print("Caso #%d: %d" %(i + 1, maximum(R, G, B)))
    elif conversionType == "min":
        print("Caso #%d: %d" %(i + 1, minimum(R, G, B)))
    elif conversionType == "mean":
        print("Caso #%d: %d" %(i + 1, (R + G + B) // 3))
    elif conversionType == "eye":
        P = int(0.30 * R + 0.59 * G + 0.11 * B)
        print("Caso #%d: %d" %(i + 1, P))