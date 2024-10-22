#include <stdio.h>

int main() {
    // Mendefinisikan variabel
    int a = 9;
    int b = 5;
    int x = 8;
    int y = 8;

    // Menghitung sisa bagi dari a dibagi b dan x dibagi y
    int sisa_a_b = a % b;
    int sisa_x_y = x % y; 

    // Menghitung total sisa bagi
    int total_sisa_bagi = sisa_a_b + sisa_x_y;

    // Menampilkan total sisa bagi
    printf("Variabel a bernilai %d \n", a);
    printf("Variabel b bernilai %d \n", b);
    printf("Variabel x bernilai %d \n", x);
    printf("Variabel y bernilai %d \n", y);
    printf("Total sisa bagi dari a dibagi b dan x dibagi y adalah %d\n", total_sisa_bagi);

    return 0;
}