#include <stdio.h>

int main()
{
    int mahasiswa;
    int mata_kuliah;
    int jumlah_mahasiswa = 3;
    int jumlah_mata_kuliah = 3;

    printf("TABEL NILAI\n");
    printf("----------------------------------------------------\n");
    printf("%9s", "Mahasiswa");

    for (mata_kuliah = 0; mata_kuliah < jumlah_mata_kuliah; mata_kuliah++)
    {
        printf("    MK-%d", mata_kuliah + 1);
    }

    printf("\n");

    for (mahasiswa = 0; mahasiswa < jumlah_mahasiswa; mahasiswa++)
    {
        printf("%9d", mahasiswa + 1);

        for (mata_kuliah = 0; mata_kuliah < jumlah_mata_kuliah; mata_kuliah++)
        {
            printf("%8.2f", 30.00);
        }
        printf("\n");
    }

    return 0;
}