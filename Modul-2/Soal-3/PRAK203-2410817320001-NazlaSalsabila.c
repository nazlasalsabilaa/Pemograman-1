#include <stdio.h>

int main() {
    float a, b, i, j, x, y, hasil, perkalian, jumlahXY;

    // Bagian Input
    printf("\n===== INPUT =====\n");
    printf("Masukkan nilai a: ");
    scanf("%f", &a);
    
    printf("Masukkan nilai b: ");
    scanf("%f", &b);
    
    printf("Masukkan nilai i: ");
    scanf("%f", &i);
    
    printf("Masukkan nilai j: ");
    scanf("%f", &j);
    
    printf("Masukkan nilai x: ");
    scanf("%f", &x);
    
    printf("Masukkan nilai y: ");
    scanf("%f", &y);
    
    float selisih = a - b;
    float bagi = i / j;
    perkalian = selisih * bagi;
    jumlahXY = x + y;
    hasil = perkalian - jumlahXY;

    // Bagian Output
    printf("\n===== OUTPUT =====\n");
    printf("Hasil dari (a - b) * (i / j) - (x + y) adalah: %.3f\n", hasil);

    return 0;
}
