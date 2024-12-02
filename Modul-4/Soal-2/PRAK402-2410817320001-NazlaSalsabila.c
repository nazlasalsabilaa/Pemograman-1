#include <stdio.h>

int main() {
    int batas, i;
    printf("Masukkan batas maksimal dari bilangan yang akan dihitung: ");
    scanf("%d", &batas);

    for (i = 1; i <= batas; i += 2) {
        printf("%d ", i);
    }
    printf("\n");

    for (i = (batas % 2 == 0 ? batas : batas - 1); i >= 2; i -= 2) {
        printf("%d ", i);
    }
    printf("\n");

    return 0;
}