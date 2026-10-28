#include <stdio.h>
#define MAX_DATA 100

void baca_data(int data[], int jumlah_data);
void tampilkan_data(const int data[], int jumlah_data);
int cari_sekuensial(const int data[], int jumlah_data, int target);
int hapus_elemen(int data[], int *jumlah_data, int target);

int main()
{
    int data[MAX_DATA];
    int jumlah_data;
    int target;
    int status_hapus;

    do 
    {
        printf("Masukkan jumlah data 1-%d: ", MAX_DATA);
        scanf("%d", &jumlah_data);

        if ((jumlah_data < 1) || (jumlah_data > 100))
        {
            printf("Jumlah data tidak valid.\n");
        }
    }
    while ((jumlah_data < 1) || (jumlah_data > 100));

    baca_data(data, jumlah_data);
    
    printf("Masukkan elemen yang ingin dihapus: ");
    scanf("%d", &target);

    printf("\nData awal: ");
    tampilkan_data(data, jumlah_data);
    
    status_hapus = hapus_elemen(data, &jumlah_data, target);

    if (status_hapus != -1)
    {
        printf("\nHapus nilai: %d\n", target);
        printf("Data akhir: ");
        tampilkan_data(data, jumlah_data);
    }
    else
    {
        printf("Data tidak ada yang dihapus. Array tidak berubah.\n");
        printf("Data akhir: ");
        tampilkan_data(data, jumlah_data);
    }

    return 0;
}

void baca_data(int data[], int jumlah_data)
{
    int i;
    
    printf("\nMasukkan %d data: \n", jumlah_data);
    
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

int hapus_elemen(int data[], int *jumlah_data, int target)
{
    int posisi = cari_sekuensial(data, *jumlah_data, target);
    int i;

    if (posisi == -1)
    {
        return -1;
    }

    for (i = posisi; i < *jumlah_data - 1; i++)
    {
        data[i] = data[i + 1];
    }
    
    (*jumlah_data)--;

    return posisi;
}