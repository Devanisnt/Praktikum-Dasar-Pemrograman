#include <stdio.h>

#define MAX_DATA 100

void baca_data(int data[], int jumlah_data);
void data_asli(const int data[], int jumlah_data);
void data_terbalik(const int data[], int jumlah_data);

int main()
{
    int data[MAX_DATA];
    int jumlah_data;

    do 
    {
        printf("Masukkan jumlah data 1-%d: ", MAX_DATA);
        scanf("%d", &jumlah_data);

        if ((jumlah_data < 1) || (jumlah_data > MAX_DATA))
        {
            printf("Jumlah data tidak valid.\n");
        }
    }
    while ((jumlah_data < 1) || (jumlah_data > MAX_DATA));

    baca_data(data, jumlah_data);
    data_asli(data, jumlah_data);
    data_terbalik(data, jumlah_data);

    printf("\n");
    
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

void data_asli(const int data[], int jumlah_data)
{
    int i;
    
    printf("\nData asli    : ");
    for (i = 0; i < jumlah_data; i++)
    {
        printf("%d ", data[i]);
    }
}

void data_terbalik(const int data[], int jumlah_data)
{
    int i;
    
    printf("\nData terbalik : ");
    for (i = jumlah_data - 1; i >= 0; i--)
    {
        printf("%d ", data[i]);
    }
}
