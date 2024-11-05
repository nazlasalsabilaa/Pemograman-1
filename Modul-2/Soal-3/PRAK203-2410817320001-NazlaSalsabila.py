# Bagian Input
print("\n===== INPUT =====");
a = float(input("Masukkan nilai a: "))
b = float(input("Masukkan nilai b: "))
i = float(input("Masukkan nilai i: "))
j = float(input("Masukkan nilai j: "))
x = float(input("Masukkan nilai x: "))
y = float(input("Masukkan nilai y: "))

# Perhitungan
selisih = a - b
bagi = i / j
perkalian = selisih * bagi
jumlahXY = x + y
hasil = perkalian - jumlahXY

# Bagian Output
print("\n===== OUTPUT =====");
print(f"Hasil dari (a - b) * (i / j) - (x + y) adalah: {hasil:.3f}")
