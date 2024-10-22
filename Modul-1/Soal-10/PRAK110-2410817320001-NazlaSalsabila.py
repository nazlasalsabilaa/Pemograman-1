import math

# Diketahui
alas = 5
tinggi = 12

# Menghitung sisi miring (sisi C) menggunakan Teorema Pythagoras
sisi_miring = math.sqrt(alas**2 + tinggi**2)

# Menghitung keliling
keliling = alas + tinggi + sisi_miring

# Menghitung luas
luas = 0.5 * alas * tinggi

# Menampilkan output
print("Diketahui :")
print("Alas = %d cm" % alas)
print("Tinggi = %d cm" % tinggi)
print()
print("Jawab :")
print("Sisi A = %d cm" % alas)
print("Sisi B = %d cm" % tinggi)
print("Sisi C = %.0f cm" % sisi_miring)
print("Keliling = %.0f cm" % keliling)
print("Luas = %.0f cm" % luas)
