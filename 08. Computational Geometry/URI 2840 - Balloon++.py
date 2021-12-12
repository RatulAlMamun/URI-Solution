PI = 3.1415
R, L = map(int, input().split())
V = (4 / 3) * PI * R * R * R
print(int(L // V))