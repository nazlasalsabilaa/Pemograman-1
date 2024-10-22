# Diketahui
jumlah_pasukan = 958730
jumlah_pahlawan = 5

# Menghitung jumlah pasukan yang harus dikalahkan oleh setiap pahlawan
pasukan_per_pahlawan = jumlah_pasukan // jumlah_pahlawan  # Menggunakan pembagian bulat

# Menampilkan output
print("Jumlah pasukan yang dibawa Yu Zhong = %d" % jumlah_pasukan)
print("Jumlah pahlawan = %d" % jumlah_pahlawan)
print("Jumlah pasukan yang harus dikalahkan setiap pahlawan adalah %d pasukan" % pasukan_per_pahlawan)
