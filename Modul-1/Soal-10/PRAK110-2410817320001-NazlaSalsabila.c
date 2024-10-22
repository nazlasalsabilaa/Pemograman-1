#include <stdio.h>
#include <math.h>

int main() {
    // Diketahui
    int alas = 5;
    int tinggi = 12;

    // Menghitung sisi miring (sisi C) menggunakan Teorema Pythagoras
    double sisi_miring = sqrt(pow(alas, 2) + pow(tinggi, 2));

    // Menghitung keliling
    double keliling = alas + tinggi + sisi_miring;

    // Menghitung luas
    double luas = 0.5 * alas * tinggi;

    // Menampilkan output
    printf("Diketahui :\n");
    printf("Alas = %d cm\n", alas);
    printf("Tinggi = %d cm\n", tinggi);
    printf("\n");
    printf("Jawab :\n");
    printf("Sisi A = %d cm\n", alas);
    printf("Sisi B = %d cm\n", tinggi);
    printf("Sisi C = %.0f cm\n", sisi_miring);
    printf("Keliling = %.0f cm\n", keliling);
    printf("Luas = %.0f cm\n", luas);

    return 0;
}
