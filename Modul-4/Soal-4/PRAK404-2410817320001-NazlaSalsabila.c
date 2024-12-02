#include <stdio.h>

int main() {
    int pilihan;
    float a, b, hasil;
    while (1) {
        printf("Pilih program:\n1. Penjumlahan\n2. Pengurangan\n3. Perkalian\n4. Pembagian\n5. Exit\nMasukkan Pilihan: ");
        scanf("%d", &pilihan);
        if (pilihan == 5) {
            printf("Terimakasih, telah menggunakan kalkulator NAZLASALSABILA\n");
            break;
        } else if (pilihan < 1 || pilihan > 5) {
            printf("Input anda salah, silahkan coba lagi\n");
            continue;
        }
        printf("Masukkan nilai pertama: ");
        scanf("%f", &a);
        printf("Masukkan nilai kedua: ");
        scanf("%f", &b);
        if (pilihan == 1) hasil = a + b, printf("Hasil penjumlahan %.2f dengan %.2f adalah %.2f\n", a, b, hasil);
        else if (pilihan == 2) hasil = a - b, printf("Hasil pengurangan %.2f dengan %.2f adalah %.2f\n", a, b, hasil);
        else if (pilihan == 3) hasil = a * b, printf("Hasil perkalian %.2f dengan %.2f adalah %.2f\n", a, b, hasil);
        else if (pilihan == 4) b == 0 ? printf("Pembagian dengan nol tidak diperbolehkan!\n") : (hasil = a / b, printf("Hasil pembagian %.2f dengan %.2f adalah %.2f\n", a, b, hasil));
    }
    return 0;
}