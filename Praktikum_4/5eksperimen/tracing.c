#include <stdio.h>

int main()
{
    int nilai = 78;
    int kehadiran = 80;
    char status;

    if (nilai >= 75)
    {
        if (kehadiran >= 75)
        {
            status ='L';
        }
        else
        {
            status = 'T';
        }
    }
    else
    {
        status = 'T';
    }

    printf("Status: %c\n", status);

    return 0;
}