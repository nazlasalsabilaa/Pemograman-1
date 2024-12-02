angka1, angka2 = map(int, input("Masukkan angka pertama dan kedua: ").split())

if angka1 < angka2:
    for i in range(angka1, angka2 + 1):
        print(i, angka2 - (i - angka1), end=" - " if i != angka2 else "\n")
else:
    for i in range(angka1, angka2 - 1, -1):
        print(i, angka2 + (angka1 - i), end=" - " if i != angka2 else "\n")