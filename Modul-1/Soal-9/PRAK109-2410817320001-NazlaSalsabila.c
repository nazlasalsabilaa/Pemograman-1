#include <stdio.h>

int main() {
    // Diketahui
    int jumlah_pasukan = 958730;
    int jumlah_pahlawan = 5;

    // Menghitung jumlah pasukan yang harus dikalahkan oleh setiap pahlawan
    int pasukan_per_pahlawan = jumlah_pasukan / jumlah_pahlawan;

    // Menampilkan output
    printf("Jumlah pasukan yang dibawa Yu Zhong = %d\n", jumlah_pasukan);
    printf("Jumlah pahlawan = %d\n", jumlah_pahlawan);
    printf("Jumlah pasukan yang harus dikalahkan setiap pahlawan adalah %d pasukan\n", pasukan_per_pahlawan);

    return 0;
}
