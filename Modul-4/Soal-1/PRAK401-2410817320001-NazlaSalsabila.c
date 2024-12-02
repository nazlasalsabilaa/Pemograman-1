#include <stdio.h>

int main() {
    int kelipatan, i;
    char simbol[10];
    printf("Masukkan bilangan kelipatan yang dirubah menjadi simbol: ");
    scanf("%d", &kelipatan);
    printf("Masukkan simbol yang akan menggantikan bilangan kelipatan: ");
    scanf("%s", simbol);

    for (i = 1; i <= 50; i++) {
        if (i % kelipatan == 0) {
            printf("%s ", simbol);
        } else {
            printf("%d ", i);
        }
    }
    return 0;
}