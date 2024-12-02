#include <stdio.h>

int main() {
    int angka1, angka2;
    printf("Masukkan angka pertama dan kedua: ");
    scanf("%d %d", &angka1, &angka2);

    if (angka1 < angka2) {
        for (int i = angka1; i <= angka2; i++) {
            printf("%d %d", i, angka2 - (i - angka1));
            if (i != angka2) {
                printf(" - ");
            }
        }
    }
    else {
        for (int i = angka1; i >= angka2; i--) {
            printf("%d %d", i, angka2 + (angka1 - i));
            if (i != angka2) {
                printf(" - ");
            }
        }
    }
    printf("\n");

    return 0;
}