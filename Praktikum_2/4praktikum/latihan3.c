#include <stdio.h>
int main()
{
    double celcius;
    double fahrenheit;

    printf("Masukkan suhu Celcius: ");
    scanf("%lf", &celcius);

    fahrenheit = (9.0 / 5.0) * celcius + 32.0;

    printf("%.2f derajat celcius = %.2f derajat fahrenheit\n",
            celcius,
            fahrenheit);
    
    return 0;
}