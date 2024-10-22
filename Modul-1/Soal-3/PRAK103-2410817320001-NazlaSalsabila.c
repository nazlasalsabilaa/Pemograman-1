#include <stdio.h>

int main() {
    // Mendefinisikan variabel
    int a = 9;
    int b = 6;
    int x = 10;
    int y = 7;

    // Menampilkan nilai variabel
    printf("Variabel a bernilai %d\n", a);
    printf("Variabel b bernilai %d\n", b);
    printf("Variabel x bernilai %d\n", x);
    printf("Variabel y bernilai %d\n", y);

    // Menghitung hasil dari ((a + b) dikali x) dan kemudian dibagi y
    float hasil = ((a + b) * (float)x) / y;

    // Menampilkan hasil dengan 2 angka di belakang koma
    printf("Hasil dari a ditambah b dikali x dan dibagi y adalah %.2f\n", hasil);

    return 0;
}