batas = int(input("Masukkan batas maksimal dari bilangan yang akan dihitung: "))

for i in range(1, batas + 1, 2):
    print(i, end=" ")

print()

i = batas if batas % 2 == 0 else batas - 1
while i >= 2:
    print(i, end=" ")
    i -= 2

print()