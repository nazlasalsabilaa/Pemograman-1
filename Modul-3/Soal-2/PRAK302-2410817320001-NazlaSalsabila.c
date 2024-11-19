#include <stdio.h>

int main() {

    int bil;
    printf("Masukan angka: ");
    scanf("%d", &bil);

    if (bil >= 80) {
        printf("nilai huruf adalah A\n");
    }
    else if (bil >= 70 && bil < 80) {
        printf("nilai huruf adalah B\n");
    }
    else if (bil >= 60 && bil < 70) {
        printf("nilai huruf adalah C\n");
    }
    else if (bil >= 50 && bil < 60) {
        printf("nilai huruf adalah D\n");
    }
    else {
        printf("nilai huruf adalah E\n");
    }

    return 0;
}