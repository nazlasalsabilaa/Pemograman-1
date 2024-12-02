#include <stdio.h>

void hitung_kelipatan() {
    int n, kelipatan, total_keseluruhan = 0;

    printf("Masukkan banyaknya n: ");
    scanf("%d", &n);
    printf("Masukkan kelipatan: ");
    scanf("%d", &kelipatan);

    for (int i = 1; i <= n; i++) {
        int total_baris = 0;
        printf("(");
        for (int j = i; j > 0; j--) {
            int hasil = j * kelipatan;
            total_baris += hasil;
            printf("%d * %d", j, kelipatan);
            if (j > 1) {
                printf(") + (");
            }
        }
        printf(") = %d\n", total_baris);
        total_keseluruhan += total_baris;
    }
    printf("%d\n", total_keseluruhan);
}

int main() {
    hitung_kelipatan();
    return 0;
}