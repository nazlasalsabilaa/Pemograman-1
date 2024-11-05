# Menggunakan pi = 22/7
pi = 22 / 7

# Bagian Input
print("\n===== INPUT =====")
r = float(input("Masukkan jari-jari bejana: "))
h = float(input("Masukkan tinggi bejana: "))

# Bagian Output
print("\n===== OUTPUT =====")

# Menghitung volume bejana
volume = pi * r**2 * h

# Menghitung luas permukaan bejana
luas = (2 * pi * r * h) + (2 * pi * r**2)

# Menghitung keliling lingkaran dasar bejana
keliling = 2 * pi * r

# Menampilkan hasil dengan dua angka di belakang koma
print(f"Volume = {volume:.2f}")
print(f"Luas = {luas:.2f}")
print(f"Keliling = {keliling:.2f}")
