#include <stdio.h>

int main() {
    int baris, kolom;
    printf("Masukkan jumlah baris dan kolom: ");
    scanf("%d %d", &baris, &kolom);
    
    int data[baris * kolom];
    printf("Masukkan angka-angka dalam matriks: ");
    for (int i = 0; i < baris * kolom; i++) {
        scanf("%d", &data[i]);
    }
    
    int index = 0;
    for (int i = 0; i < baris; i++) {
        for (int j = 0; j < kolom; j++) {
            printf("%d", data[index++]);
            if (j < kolom - 1) printf(" ");
        }
        printf("\n");
    }
    
    return 0;
}