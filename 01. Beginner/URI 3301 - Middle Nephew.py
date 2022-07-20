huguinho, zezinho, luisinho = map(int, input().split())
if ((huguinho > zezinho and huguinho < luisinho) or (huguinho < zezinho and huguinho > luisinho)):
    print("huguinho")
elif ((zezinho > huguinho and zezinho < luisinho) or (zezinho < huguinho and zezinho > luisinho)):
    print("zezinho")
else:
    print("luisinho")