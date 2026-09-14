#include <stdio.h>
int main()
{
    int umur;
    float tinggi_badan;
    char huruf_mutu;

    printf("Masukkan umur: ");
    scanf("%d", &umur);

    printf("Masukkan tinggi badan: ");
    scanf("%f", &tinggi_badan);

    printf("Masukkan huruf mutu: ");
    scanf(" %c", &huruf_mutu);

    printf("\nUmur: %d tahun\n", umur);
    printf("Tinggi badan: %.1f cm\n", tinggi_badan);
    printf("Huruf mutu: %c\n", huruf_mutu);

    return 0;
}
