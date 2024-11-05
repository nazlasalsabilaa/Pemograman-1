import math

# Fungsi untuk menghitung alas
def hitung_alas(A, B):
    return math.sqrt(B**2 - A**2)

# Fungsi untuk menghitung keliling
def hitung_keliling(A, B, C):
    return A + B + C

# Fungsi untuk menghitung luas
def hitung_luas(C, A):
    return 0.5 * C * A

def main():
    # Bagian Input
    print("\n===== INPUT =====")
    A = int(input("Masukkan nilai A (tinggi): "))  # Menggunakan int untuk hasil bulat
    B = int(input("Masukkan nilai B (sisi miring): "))  # Menggunakan int untuk hasil bulat
    
    # Validasi input
    if A <= 0 or B <= 0:
        print("Nilai A dan B harus positif.")
        return
    
    if A >= B:
        print("Nilai B (sisi miring) harus lebih besar dari A (tinggi).")
        return
    
    # Menghitung alas
    C = hitung_alas(A, B)
    
    # Menghitung keliling
    keliling = hitung_keliling(A, B, C)
    
    # Menghitung luas
    luas = hitung_luas(C, A)
    
    # Bagian Output
    print("\n===== OUTPUT =====")
    print(f"Alas = {round(C)} cm")  
    print(f"Tinggi = {A} cm")
    print(f"Keliling = {round(keliling)} cm")  
    print(f"Luas = {round(luas)} cm^2") 

# Memanggil fungsi utama
main()
