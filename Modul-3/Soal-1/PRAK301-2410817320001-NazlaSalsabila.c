#include <stdio.h>

int main() {
    int a, b, c, temp;

    printf("Masukkan tiga angka: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a > b) {
        temp = a; a = b; b = temp;
    }
    if (a > c) {
        temp = a; a = c; c = temp;
    }
    if (b > c) {
        temp = b; b = c; c = temp;
    }

    printf("Hasil dari pengurutan dari nilai terkecil ke terbesar: %d %d %d\n", a, b, c);
    
    return 0;
}