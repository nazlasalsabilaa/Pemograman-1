#include <stdio.h>
#include <math.h>

int main() {
    // Bagian Input
    float r, h;
    printf("\n===== INPUT =====\n");
    printf("Masukkan jari-jari bejana: ");
    scanf("%f", &r);
    printf("Masukkan tinggi bejana: ");
    scanf("%f", &h);

    // Bagian Output
    printf("\n===== OUTPUT =====\n");
    
    // Menghitung volume bejana
    float pi = 22.0 / 7.0; // Menggunakan pi = 22/7
    float volume = pi * r * r * h;

    // Menghitung luas permukaan bejana
    float luas = (2 * pi * r * h) + (2 * pi * r * r);

    // Menghitung keliling lingkaran dasar bejana
    float keliling = 2 * pi * r;

    // Menampilkan hasil dengan dua angka di belakang koma
    printf("Volume = %.2f\n", volume);
    printf("Luas = %.2f\n", luas);
    printf("Keliling = %.2f\n", keliling);

    return 0;
}
