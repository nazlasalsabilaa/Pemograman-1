#include <stdio.h>

int main() {
    int n1, n2;
    printf("Masukkan n1 dan n2: ");
    scanf("%d %d", &n1, &n2);
    
    if (n1 != n2) {
        printf("Jumlah tidak sama\n");
    } else {
        int baris1[n1], baris2[n2];
        printf("Masukkan %d angka untuk baris pertama: ", n1);
        for (int i = 0; i < n1; i++) {
            scanf("%d", &baris1[i]);
        }
        
        printf("Masukkan %d angka untuk baris kedua: ", n2);
        for (int i = 0; i < n2; i++) {
            scanf("%d", &baris2[i]);
        }
        
        printf("Hasil perkalian:\n");
        for (int i = 0; i < n1; i++) {
            printf("%d ", baris1[i] * baris2[i]);
        }
    }
    
    return 0;
}