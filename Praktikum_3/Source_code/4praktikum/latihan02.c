#include <stdio.h>

int main()
{
    int total_detik;
    int jam;
    int menit;
    int detik;
    int sisa_detik;

    printf("Masukkan total detik: ");
    scanf("%d", &total_detik);

    jam = total_detik / 3600;
    sisa_detik = total_detik % 3600;
    menit = sisa_detik / 60;
    detik = sisa_detik % 60;

    printf("\nHASIL KONVERSI\n");
    printf("%d detik setara dengan:\n", total_detik);
    printf("%d jam\n", jam);
    printf("%d menit\n", menit);
    printf("%d detik\n", detik);

    return 0;
}