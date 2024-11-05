#include <stdio.h>

int main() {
    char nama[50], nim[20], kelas[10], tempat_tanggal_lahir[100], alamat[100], hobby[50], no_hp[15];

    // Bagian Input
    printf("\n===== INPUT =====\n");
    printf("Nama                : ");
    scanf(" %[^\n]", nama);
    
    printf("NIM                 : ");
    scanf("%s", nim);
    
    printf("Kelas Paralel       : ");
    scanf("%s", kelas);
    
    printf("Tempat/Tanggal Lahir: ");
    scanf(" %[^\n]", tempat_tanggal_lahir);
    
    printf("Alamat              : ");
    scanf(" %[^\n]", alamat);
    
    printf("Hobby               : ");
    scanf(" %[^\n]", hobby);
    
    printf("No. HP              : ");
    scanf("%s", no_hp);
    
    // Bagian Output
    printf("\n===== OUTPUT =====\n");
    printf("Nama                : %s\n", nama);
    printf("NIM                 : %s\n", nim);
    printf("Kelas Paralel       : %s\n", kelas);
    printf("Tempat/Tanggal Lahir: %s\n", tempat_tanggal_lahir);
    printf("Alamat              : %s\n", alamat);
    printf("Hobby               : %s\n", hobby);
    printf("No. HP              : %s\n", no_hp);

    return 0;
}
