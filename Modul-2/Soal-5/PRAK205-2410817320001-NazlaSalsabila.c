#include <stdio.h>
#include <math.h>  

// Fungsi untuk menghitung alas
double hitung_alas(int A, int B) {
    return sqrt(B * B - A * A);
}

// Fungsi untuk menghitung keliling
double hitung_keliling(int A, int B, double C) {
    return A + B + C;
}

// Fungsi untuk menghitung luas
double hitung_luas(double C, int A) {
    return 0.5 * C * A;
}

int main() {
    int A, B;
    double C, keliling, luas;
    
    // Bagian Input
    printf("\n===== INPUT =====\n");
    printf("Masukkan nilai A (tinggi): ");
    scanf("%d", &A);
    printf("Masukkan nilai B (sisi miring): ");
    scanf("%d", &B);
    
    // Validasi input
    if (A <= 0 || B <= 0) {
        printf("Nilai A dan B harus positif.\n");
        return 1;
    }
    
    if (A >= B) {
        printf("Nilai B (sisi miring) harus lebih besar dari A (tinggi).\n");
        return 1; 
    }
    
    // Menghitung alas
    C = hitung_alas(A, B);
    
    // Menghitung keliling
    keliling = hitung_keliling(A, B, C);
    
    // Menghitung luas
    luas = hitung_luas(C, A);
    
    // Bagian Output
    printf("\n===== OUTPUT =====\n");
    printf("Alas = %.0f cm\n", round(C)); 
    printf("Tinggi = %d cm\n", A);
    printf("Keliling = %.0f cm\n", round(keliling)); 
    printf("Luas = %.0f cm^2\n", round(luas)); 
    
    return 0;
}
