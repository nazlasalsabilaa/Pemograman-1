#include <stdio.h>

int main() {
    // Mendefinisikan harga sepatu
    int harga_sepatu_A = 400000;
    int harga_sepatu_B = 350000;

    // Menampilkan harga sepatu sebelum diskon
    printf("Harga sepatu A adalah %d\n", harga_sepatu_A);
    printf("Harga sepatu B adalah %d\n", harga_sepatu_B);

    // Menghitung diskon sepatu A sebesar 13%
    float diskon_A_13 = harga_sepatu_A * 13 / 100.0;
    int harga_setelah_diskon_A_13 = harga_sepatu_A - diskon_A_13;

    // Menghitung diskon sepatu B sebesar 21%
    float diskon_B_21 = harga_sepatu_B * 21 / 100.0;
    int harga_setelah_diskon_B_21 = harga_sepatu_B - diskon_B_21;

    // Menampilkan harga sepatu setelah diskon
    printf("Sepatu A mendapat diskon 13%% sehingga harganya menjadi %d\n", harga_setelah_diskon_A_13);
    printf("Sepatu B mendapat diskon 21%% sehingga harganya menjadi %d\n", harga_setelah_diskon_B_21);

    return 0;
}