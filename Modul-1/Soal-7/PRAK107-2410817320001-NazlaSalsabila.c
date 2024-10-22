#include <stdio.h>

int main() {
    // Mendefinisikan panjang sisi-sisi segitiga
    int sisi_a = 4;
    int sisi_b = 5;
    int sisi_c = 7;

    // Biaya pemasangan pagar per meter
    int harga_per_meter = 85000;

    // Menghitung keliling tanah (jumlah panjang semua sisi)
    int keliling = sisi_a + sisi_b + sisi_c;

    // Menghitung total biaya pemasangan pagar
    int total_biaya = keliling * harga_per_meter;

    // Menampilkan output menggunakan format specifier
    printf("Diketahui :\n");
    printf("Panjang sisi segitiga berturut-turut adalah %d, %d, dan %d\n", sisi_a, sisi_b, sisi_c);
    printf("Keliling Tanah Pak Dengklek adalah %d\n", keliling);
    printf("Harga tanah Per Meter adalah %d\n", harga_per_meter);
    printf("Jawaban :\n");
    printf("Biaya yang diperlukan Pak Dengklek adalah : Rp %d\n", total_biaya);

    return 0;
}
