/*
Nama       : Devan Adyatma Abel Wibowo
NIM        : 2610511039
Kelas      : B
Modul      : 5
Deskripsi  : Program menerima dan mengolah nilai mahasiswa menggunakan struktur pengulangan.
*/

#include <stdio.h>
int main()
{
    int jumlah_mahasiswa;
    int i;
    double nilai = 0.0;
    double total_nilai = 0.0;
    int jumlah_lulus = 0;
    int jumlah_tidak_lulus = 0;
    double nilai_tertinggi = 0.0;
    double nilai_terendah = 0.0;
    double rata_rata;
    double persentase_lulus;

    printf("================================================\n");
    printf("              PROGRAM REKAP NILAI               \n");
    printf("================================================\n");

    do
    {
        printf("Masukkan jumlah mahasiswa 1-100: ");
        scanf("%d", &jumlah_mahasiswa);

        if ((jumlah_mahasiswa < 1) || (jumlah_mahasiswa > 100))
        {
            printf("Jumlah mahasiswa tidak valid.\n");
        }
    }
    while ((jumlah_mahasiswa < 1) || (jumlah_mahasiswa > 100));

    printf("\n");

    for (i = 1; i <= jumlah_mahasiswa; i++)
    {
        do 
        {
            printf("Nilai mahasiswa ke-%d: ", i);
            scanf("%lf", &nilai);

            if ((nilai < 0) || (nilai > 100))
            {
                printf("Nilai tidak valid.\n");
            }
        }
        while ((nilai < 0) || (nilai > 100));

        total_nilai += nilai;

        if (i == 1)
        {
            nilai_terendah = nilai;
            nilai_tertinggi = nilai;
        }
        else
        {
            if (nilai_tertinggi < nilai)
            {
                nilai_tertinggi = nilai;
            }
            if (nilai_terendah > nilai)
            {
                nilai_terendah = nilai;
            }
        }

        if (nilai >= 60)
        {
            jumlah_lulus++;
        }
        else
        {
            jumlah_tidak_lulus++;
        }

        rata_rata = total_nilai / jumlah_mahasiswa;
        persentase_lulus = ((double)jumlah_lulus / jumlah_mahasiswa) * 100.0; 
    }

    printf("\nHASIL REKAP\n");
    printf("------------------------------------------------\n");
    printf("Jumlah mahasiswa     : %d\n", jumlah_mahasiswa);
    printf("Total nilai          : %.2f\n", total_nilai);
    printf("Rata-rata            : %.2f\n", rata_rata);
    printf("Nilai tertinggi      : %.2f\n", nilai_tertinggi);
    printf("Nilai terendah       : %.2f\n", nilai_terendah);
    printf("Jumlah lulus         : %d\n", jumlah_lulus);
    printf("Jumlah tidak lulus   : %d\n", jumlah_tidak_lulus);
    printf("Persentase kelulusan : %.2f\n", persentase_lulus);
    printf("================================================\n");

    return 0;
}