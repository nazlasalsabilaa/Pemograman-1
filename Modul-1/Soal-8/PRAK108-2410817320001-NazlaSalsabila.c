#include <stdio.h>
#include <math.h>

int main() {
    // Diketahui (menggunakan float untuk perhitungan yang lebih akurat)
    float putaran = 5.0;
    float jarak_tempuh = 14.0;

    // Menghitung keliling satu putaran
    float keliling_per_putaran = jarak_tempuh / putaran;

    // Menghitung jari-jari taman
    float jari_jari = keliling_per_putaran / (2 * M_PI);  // M_PI untuk π

    // Menampilkan output dengan format float
    printf("Diketahui :\n");
    printf("Pak Dengklek mengelilingi taman = %.0f Putaran\n", putaran);
    printf("Jarak tempuh Pak Dengklek = %.0f Kilometer\n", jarak_tempuh);
    printf("\n");
    printf("Jawaban :\n");
    printf("Jari-jari taman yang dikelilingi Pak Dengklek adalah %.2f Kilometer\n", jari_jari);

    return 0;
}
