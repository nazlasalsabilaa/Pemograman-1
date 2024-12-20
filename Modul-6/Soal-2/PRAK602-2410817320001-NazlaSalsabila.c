#include <stdio.h>

int main() {
    int n;
    printf("Masukkan jumlah ruangan: ");
    scanf("%d", &n);
    
    int zetsu[n];
    printf("Masukkan banyaknya zetsu putih pada setiap ruangan: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &zetsu[i]);
    }
    
    for (int i = 0; i < n; i++) {
        printf("%d ", zetsu[i] * (i + 1));
    }
    printf("\n");
    
    return 0;
}