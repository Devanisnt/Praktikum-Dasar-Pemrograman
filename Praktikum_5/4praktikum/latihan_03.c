#include <stdio.h>
int main()
{
    double nilai;
    double total = 0.0;
    double rata_rata;
    double nilai_tertinggi = 0.0;
    double nilai_terendah = 0.0;

    int jumlah_data = 0;
    int jumlah_lulus = 0;

    printf("Masukkan nilai 0-100, gunakan -1 untuk berhenti.\n");
    printf("Nilai: ");
    scanf("%lf", &nilai);

    while (nilai != -1.0)
    {
        if ((nilai < 0) || (nilai > 100))
        {
            printf("Nilai tidak valid dan tidak diproses.\n");
        }
        else
        {
            if (jumlah_data == 0)
            {
                nilai_tertinggi = nilai;
                nilai_terendah = nilai;
            }
            else
            {
                if (nilai > nilai_tertinggi)
                {
                    nilai_tertinggi = nilai;
                }

                if (nilai < nilai_terendah)
                {
                    nilai_terendah = nilai;
                }
            }

            total += nilai;
            jumlah_data++;

            if (nilai >= 60)
            {
                jumlah_lulus++;
            }
        }

        printf("Nilai: ");
        scanf("%lf", &nilai);
    }

    if (jumlah_data > 0)
    {
        rata_rata = total / jumlah_data;

        printf("\nHASIL REKAP\n");
        printf("Jumlah data    : %d\n", jumlah_data);
        printf("Total nilai    : %.2f\n", total);
        printf("Rata-rata      : %.2f\n", rata_rata);
        printf("Nilai tertinggi: %.2f\n", nilai_tertinggi);
        printf("Nilai terendah : %.2f\n", nilai_terendah);
        printf("Jumlah lulus   : %d\n", jumlah_lulus);
    }
    else
    {
        printf("Tidak ada data valid yang diproses.\n");
    }

    return 0;
}