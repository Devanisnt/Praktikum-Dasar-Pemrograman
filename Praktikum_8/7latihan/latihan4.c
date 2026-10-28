#include <stdio.h>
#define MAX_DATA 100

void baca_data(int data[], int jumlah_data);
void tampilkan_data(const int data[], int jumlah_data);
int cari_sekuensial(const int data[], int jumlah_data, int target);
void hapus_duplikat(const int asal[], int jumlah_asal, int hasil[], int *jumlah_hasil);

int main()
{
    int data_asal[MAX_DATA];
    int data_hasil[MAX_DATA];
    int jumlah_asal;
    int jumlah_hasil = 0;

    do
    {
        printf("Masukkan jumlah data 1-%d: ", MAX_DATA);
        scanf("%d", &jumlah_asal);
        if ((jumlah_asal < 1) || (jumlah_asal > MAX_DATA))
        {
            printf("Jumlah data tidak valid.\n");
        }
    } 
    while ((jumlah_asal < 1) || (jumlah_asal > MAX_DATA));

    baca_data(data_asal, jumlah_asal);

    printf("\nData awal : ");
    tampilkan_data(data_asal, jumlah_asal);

    hapus_duplikat(data_asal, jumlah_asal, data_hasil, &jumlah_hasil);

    printf("\nData akhir: ");
    tampilkan_data(data_hasil, jumlah_hasil);

    return 0;
}

void baca_data(int data[], int jumlah_data)
{
    int i;
    for (i = 0; i < jumlah_data; i++)
    {
        printf("Data ke-%d: ", i + 1);
        scanf("%d", &data[i]);
    }
}

void tampilkan_data(const int data[], int jumlah_data)
{
    int i;
    for (i = 0; i < jumlah_data; i++)
    {
        printf("%d ", data[i]);
    }
}

int cari_sekuensial(const int data[], int jumlah_data, int target)
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

void hapus_duplikat(const int asal[], int jumlah_asal, int hasil[], int *jumlah_hasil)
{
    int i;
    *jumlah_hasil = 0;

    for (i = 0; i < jumlah_asal; i++)
    {
        if (cari_sekuensial(hasil, *jumlah_hasil, asal[i]) == -1)
        {
            hasil[*jumlah_hasil] = asal[i];
            (*jumlah_hasil)++;
        }
    }
}