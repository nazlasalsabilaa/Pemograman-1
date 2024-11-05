# Program Gabungan untuk Dua Test Case
print("\n===== INPUT TEST CASE PERTAMA =====")
nilai_pertama1 = float(input("Masukkan Nilai Pertama: "))  
nilai_kedua1 = float(input("Masukkan Nilai Kedua: "))     

# Menghitung hasil penjumlahan untuk test case pertama
hasil1 = nilai_pertama1 + nilai_kedua1

# Bagian Output Test Case Pertama
print("\n===== OUTPUT TEST CASE PERTAMA =====")
print(f'Hasil dari penjumlahan nilai pertama "{int(nilai_pertama1)}" dan nilai kedua "{nilai_kedua1:.1f}" adalah "{hasil1:.2f}"')

print("\n===== INPUT TEST CASE KEDUA =====")
nilai_pertama2 = float(input("Masukkan Nilai Pertama: "))  
nilai_kedua2 = float(input("Masukkan Nilai Kedua: "))      

# Menghitung hasil penjumlahan untuk test case kedua
hasil2 = nilai_pertama2 + nilai_kedua2

# Bagian Output test case Kedua
print("\n===== OUTPUT TEST CASE KEDUA =====")
print(f'Hasil dari penjumlahan nilai pertama "{nilai_pertama2:.2f}" dan nilai kedua "{nilai_kedua2:.1f}" adalah "{hasil2:.2f}"')
