#include <stdio.h>

int main()
{
    int umur;
    int semester;
    float tinggi_badan;

    printf("Masukkan umur: ");
    scanf("%d", &umur);

    printf("Masukkan semester: ");
    scanf("%d", &semester);

    printf("Masukkan tinggi badan dalam cm: ");
    scanf("%f", &tinggi_badan);

    printf("\nDATA MAHASISWA\n");
    printf("Umur          : %d tahun\n", umur);
    printf("Semester      : %d\n", semester);
    printf("Tinggi badan  : %.1f cm\n", tinggi_badan);

    return 0;
}