#include <stdio.h>

int main() {
    // Mendefinisikan variabel
    int a = 4;
    int b = 8;
    int c = 3;

    // Menampilkan nilai variabel
    printf("Variabel a bernilai %d\n", a);
    printf("Variabel b bernilai %d\n", b);
    printf("Variabel c bernilai %d\n", c);

    // Pengecekan apakah a sama dengan b (menggunakan ==)
    int hasil_sama = (a == b);

    // Pengecekan apakah b lebih besar dari c (menggunakan >)
    int hasil_lebih_besar = (b > c);

    // Pengecekan apakah a tidak sama dengan c (menggunakan !=)
    int hasil_tidak_sama = (a != c);

    // Menampilkan hasil pengecekan
    printf("Apakah a sama dengan b ? jawabannya adalah %d\n", hasil_sama);
    printf("Apakah b lebih besar dari c ? jawabannya adalah %d\n", hasil_lebih_besar);
    printf("Apakah a tidak sama dengan c ? jawabannya adalah %d\n", hasil_tidak_sama);

    return 0;
}

