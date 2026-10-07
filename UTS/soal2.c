#include <stdio.h>
int main()
{
    int jumlah_kelas;
    int total_nilai;
    int nilai;
    int mahasiswa;
    int i;
    int jumlah_lulus;
    double rata_rata;

    printf("Masukkan jumlah kelas: ");
    scanf("%d", &jumlah_kelas);

    for (i = 1; i <= jumlah_kelas; i++)
    {
        total_nilai = 0;
        jumlah_lulus = 0;

        for (mahasiswa = 1; mahasiswa <= 3; mahasiswa++)
        {
            printf("Masukkan nilai: ");
            scanf("%d", &nilai);

            total_nilai += nilai;

            if (nilai >= 65)
            {
                jumlah_lulus++;
            }
        }

        rata_rata = total_nilai / 3.0;
        
        printf("\nRata-rata nilai kelas: %.2f\n", rata_rata);
        printf("Jumlah mahasiswa lulus: %d\n", jumlah_lulus);
    }

    return 0;
}