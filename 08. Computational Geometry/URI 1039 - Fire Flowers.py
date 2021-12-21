import math
while True:
    try:
        Rh, Xh, Yh, Rf, Xf, Yf = map(int, input().split())
        if Rh >= Rf:
            differCenter = math.sqrt((Xh - Xf) * (Xh - Xf) + (Yh - Yf) * (Yh - Yf))
            if Rh - Rf >= differCenter:
                print("RICO")
            else:
                print("MORTO")
        else:
            print("MORTO")
        
    except EOFError:
        break