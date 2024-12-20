#include <stdio.h>
#include <string.h>

int main() {
    char kode[100], pesan[100], hasil[100];
    int jumlah_bintang = 0, jumlah_pagar = 0;

    printf("Masukkan kode Shikamaru: ");
    scanf(" %[^\n]", kode);
    printf("Masukkan pesan yang diterima: ");
    scanf(" %[^\n]", pesan);

    if (strlen(kode) != strlen(pesan)) {
        printf("Panjang kalimat berbeda, pesan palsu\n");
    } else {
        int panjang = strlen(kode);
        for (int i = 0; i < panjang; i++) {
            hasil[i] = (kode[i] == ' ' && pesan[i] == ' ') ? ' ' : 
                       (kode[i] == pesan[i] ? (jumlah_bintang++, '*') : (jumlah_pagar++, '#'));
        }
        hasil[strlen(kode)] = '\0';
        printf("%s\n* = %d\n# = %d\n", hasil, jumlah_bintang, jumlah_pagar);
        printf("%s\n", jumlah_bintang >= jumlah_pagar ? "Pesan Asli" : "Pesan Palsu");
    }

    return 0;
}