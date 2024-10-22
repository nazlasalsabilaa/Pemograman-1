# Mendefinisikan panjang sisi-sisi segitiga
sisi_a = 4
sisi_b = 5
sisi_c = 7

# Biaya pemasangan pagar per meter
harga_per_meter = 85000

# Menghitung keliling tanah (jumlah panjang semua sisi)
keliling = sisi_a + sisi_b + sisi_c

# Menghitung total biaya pemasangan pagar
total_biaya = keliling * harga_per_meter

# Menampilkan output menggunakan format specifier
print("Diketahui :")
print("Panjang sisi segitiga berturut-turut adalah %d, %d, dan %d" % (sisi_a, sisi_b, sisi_c))
print("Keliling Tanah Pak Dengklek adalah %d" % keliling)
print("Harga tanah Per Meter adalah %d" % harga_per_meter)
print("Jawaban :")
print("Biaya yang diperlukan Pak Dengklek adalah : Rp %d" % total_biaya)