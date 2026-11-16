#include <stdio.h>
#include <math.h>

#define MAX_BARIS 10
#define MAX_KOLOM 10
#define EPSILON 0.000001

int main(void)
{
    double data[MAX_BARIS][MAX_KOLOM];
    double target;
    int m;
    int n;
    int frekuensi = 0;
    int baris_ditemukan = -1;
    int kolom_ditemukan = -1;

    if (scanf("%d %d", &m, &n) != 2) 
    {
        return 1;
    }

    for (int baris = 0; baris < m; baris++) 
    {
        for (int kolom = 0; kolom < n; kolom++) 
        {
            scanf("%lf", &data[baris][kolom]);
        }
    }

    scanf("%lf", &target);

    for (int baris = 0; baris < m; baris++) 
    {
        for (int kolom = 0; kolom < n; kolom++)
        {
            if (fabs(data[baris][kolom] - target) < EPSILON) 
            {
                frekuensi++;

                if (frekuensi == 1) 
                {
                    baris_ditemukan = baris + 1;
                    kolom_ditemukan = kolom + 1;
                }
            }
        }
    }

    printf("========================================\n");
    printf(" FREKUENSI DAN POSISI DENGAN TOLERANSI  \n");
    printf("========================================\n");
    printf("Target           : %.2f\n", target);
    printf("----------------------------------------\n");
    printf("Frekuensi        : %d\n", frekuensi);
    printf("Baris ditemukan  : %d\n", baris_ditemukan);
    printf("Kolom ditemukan  : %d\n", kolom_ditemukan);
    printf("========================================\n");

    return 0;
}