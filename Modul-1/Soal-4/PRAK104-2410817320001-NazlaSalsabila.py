# Mendefinisikan harga sepatu
harga_sepatu_A = 400000
harga_sepatu_B = 350000

# Menampilkan harga sepatu sebelum diskon
print("Harga sepatu A adalah", harga_sepatu_A)
print("Harga sepatu B adalah", harga_sepatu_B)

# Menghitung diskon sepatu A sebesar 13%
diskon_A_13 = harga_sepatu_A * 13 / 100
harga_setelah_diskon_A_13 = harga_sepatu_A - diskon_A_13

# Menghitung diskon sepatu B sebesar 21%
diskon_B_21 = harga_sepatu_B * 21 / 100
harga_setelah_diskon_B_21 = harga_sepatu_B - diskon_B_21

# Menampilkan harga sepatu setelah diskon
print("Sepatu A mendapat diskon 13% sehingga harganya menjadi", int(harga_setelah_diskon_A_13))
print("Sepatu B mendapat diskon 21% sehingga harganya menjadi", int(harga_setelah_diskon_B_21))
