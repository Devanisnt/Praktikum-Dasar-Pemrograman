#include <stdio.h>

int main()
{
    int total_detik = 7325;
    int jam;
    int menit;
    int detik;
    int sisa;

    jam = total_detik / 3600;
    sisa = total_detik % 3600;
    menit = sisa / 60;
    detik = sisa % 60;

    printf("%d jam, %d menit, %d detik\n",
            jam,
            menit,
            detik);

    return 0;
}