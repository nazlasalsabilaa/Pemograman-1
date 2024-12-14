bilangan = int(input())
nilai_list = list(map(int, input().split()))

maks = -100000
minim = 100000

for nilai in nilai_list:
    maks = max(maks, nilai)
    minim = min(minim, nilai)

print(maks, minim)