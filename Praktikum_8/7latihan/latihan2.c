#include <stdio.h>
#define MAX_DATA 100

void baca_data(int data[], int jumlah_data);
void tampilkan_data(const int data[], int jumlah_data);
int menghitung_genap(const int data[], int jumlah_data);
int menghitung_ganjil(const int data[], int jumlah_data);

int main()
{
    int data[MAX_DATA];
    int jumlah_data;
    int jumlah_genap;
    int jumlah_ganjil;

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
    tampilkan_data(data, jumlah_data);
    jumlah_genap = menghitung_genap(data, jumlah_data);
    jumlah_ganjil = menghitung_ganjil(data, jumlah_data);

    printf("\n\nJumlah genap: %d\n", jumlah_genap);
    printf("Jumlah Ganjil: %d\n", jumlah_ganjil);

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

    printf("\nData: ");
    for (i = 0; i < jumlah_data; i++)
    {
        printf("%d ", data[i]);
    }
}

int menghitung_genap(const int data[], int jumlah_data)
{
    int i;
    int jumlah_genap = 0;

    for (i = 0; i < jumlah_data; i++)
    {
        if (data[i] % 2 == 0)
        {
            jumlah_genap++;
        }
    }

    return jumlah_genap;
}

int menghitung_ganjil(const int data[], int jumlah_data)
{
    int i;
    int jumlah_ganjil = 0;

    for (i = 0; i < jumlah_data; i++)
    {
        if (data[i] % 2 != 0)
        {
            jumlah_ganjil++;
        }
    }

    return jumlah_ganjil;
}