#include <stdio.h>
int main()
{
    int dias;
    int horas;
    int minutos;
    int diasenseg;
    int horasenseg;
    int minutosenseg;
    int totalseg;

    printf("Dias: \n");
    scanf("%d", &dias);
    printf("Horas: \n");
    scanf("%d", &horas);
    printf("Minutos: \n");
    scanf("%d", &minutos);
    diasenseg = dias*86400;
    horasenseg = horas*3600;
    minutosenseg = minutos*60;
    totalseg = diasenseg+horasenseg+minutosenseg;
    printf("Eso es %d", totalseg);
    printf(" en segundos");

return 0;
}