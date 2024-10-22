import math

# Diketahui (menggunakan float untuk perhitungan yang lebih akurat)
putaran = 5.0
jarak_tempuh = 14.0  # dalam kilometer

# Menghitung keliling satu putaran
keliling_per_putaran = jarak_tempuh / putaran

# Menghitung jari-jari taman
jari_jari = keliling_per_putaran / (2 * math.pi)

# Menampilkan output dengan format float
print("Diketahui :")
print("Pak Dengklek mengelilingi taman = %.0f Putaran" % putaran)
print("Jarak tempuh Pak Dengklek = %.0f Kilometer" % jarak_tempuh)
print()
# Menampilkan jawaban
print("Jawaban :")
print("Jari-jari taman yang dikelilingi Pak Dengklek adalah %.2f Kilometer" % jari_jari)
