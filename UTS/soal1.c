#include <stdio.h>
int main()
{
    int nilai;
    int jumlahmahasiswa;
    int total = 0;
    int jumlahlulus = 0;
    double rata_rata;

    printf("================================================\n");
    printf("              REKAP NILAI MAHASISWA             \n");
    printf("================================================\n");

    printf("Masukkan nilai 0-100, gunakan -1 untuk berhenti.\n");
    printf("Nilai: ");
    scanf("%d", &nilai);
    
    while (nilai != -1)
    {
        if ((nilai < 0) || (nilai > 100))
        {
            printf("Nilai tidak valid. Masukkan kembali nilai 0-100.\n");
        }
        else
        {
            total += nilai;
            jumlahmahasiswa++;
            
            if (nilai >= 65)
            {
                printf("Lulus.\n");
                jumlahlulus++;
            }
            else 
            {
                printf("Tidak Lulus.\n");
            }
            
        }
        printf("Nilai: ");
        scanf("%d", &nilai);
    }

    if (jumlahmahasiswa > 0)
    {
        rata_rata = (double) total / jumlahmahasiswa;

        printf("------------------------------------------------\n");
        printf("Jumlah Mahasiswa: %d\n", jumlahmahasiswa);
        printf("Jumlah Lulus    : %d\n", jumlahlulus);
        printf("Rata-rata nilai : %.2f\n", rata_rata);
        printf("================================================\n");
    }

    return 0;
}