#include <stdio.h>

int main() {
    float nilai_pertama1, nilai_kedua1, hasil1; // Variabel untuk test case pertama
    float nilai_pertama2, nilai_kedua2, hasil2; // Variabel untuk test case kedua

    // Bagian Input Test Case Pertama
    printf("\n===== INPUT TEST CASE PERTAMA =====\n");
    printf("Masukkan Nilai Pertama: ");
    scanf("%f", &nilai_pertama1);
    printf("Masukkan Nilai Kedua: ");
    scanf("%f", &nilai_kedua1);
    
    // Menghitung hasil penjumlahan untuk test case pertama
    hasil1 = nilai_pertama1 + nilai_kedua1;

    // Bagian Output Test Case Pertama
    printf("\n===== OUTPUT TEST CASE PERTAMA =====\n");
    printf("Hasil dari penjumlahan nilai pertama \"%d\" dan nilai kedua \"%.1f\" adalah \"%.2f\"\n", 
           (int)nilai_pertama1, nilai_kedua1, hasil1);

    // Bagian Input Test Case Kedua
    printf("\n===== INPUT TEST CASE KEDUA =====\n");
    printf("Masukkan Nilai Pertama: ");
    scanf("%f", &nilai_pertama2);
    printf("Masukkan Nilai Kedua: ");
    scanf("%f", &nilai_kedua2); 

    // Menghitung hasil penjumlahan untuk test case kedua
    hasil2 = nilai_pertama2 + nilai_kedua2;

    // Bagian Output Test Case Kedua
    printf("\n===== OUTPUT TEST CASE KEDUA =====\n");
     printf("Hasil dari penjumlahan nilai pertama \"%.2f\" dan nilai kedua \"%.1f\" adalah \"%.2f\"\n", 
           nilai_pertama2, nilai_kedua2, hasil2);
    
    return 0;
}
