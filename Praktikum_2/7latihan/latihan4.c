#include <stdio.h>

int main()
{
    int total_detik;
    int jam;
    int sisa;
    int menit;
    int detik;

    printf("Masukkan total detik: ");
    scanf("%d", &total_detik);

    jam = total_detik / 3600;
    sisa = total_detik % 3600;
    menit = sisa / 60;
    detik = sisa % 60;

    printf("%d setara dengan: \n", total_detik);
    printf("%d jam\n", jam);
    printf("%d sisa\n", sisa);
    printf("%d menit\n", menit);
    printf("%d detik\n", detik);

    return 0;
}