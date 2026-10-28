#include <stdio.h>

int cari_data(
    const int data[],
    int jumlah_data,
    int target
);

int main(void)
{
    int data[6] = {10, 20, 30, 40, 50, 60};
    int target;
    int posisi;
 
    printf("Masukkan target: ");
    scanf("%d", &target);
 
    posisi = cari_data(data, 6, target);
 
    if (posisi == -1)
    {
        printf("Data tidak ditemukan.\n");
    }
    else
    {
        printf("Data ditemukan pada indeks %d.\n", posisi);
    }

    return 0;
}

int cari_data(
    const int data[],
    int jumlah_data,
    int target
)
{
    int i;
 
    for (i = 0; i < jumlah_data; i++)
    {
        if (data[i] == target)
        {
            return i;
        }
    }
 
    return -1;
}