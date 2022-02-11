#include <stdio.h>
int main() {
    int dias, horas, minutos, segundos, segundosin;


    printf("Segundos: \n");
    scanf("%d", &segundosin);
    dias =segundosin/86400;
    segundosin = segundosin%86400;
    horas = segundosin/3600;
    segundosin = segundosin%3600;
    minutos = segundosin/60;
    segundosin = segundosin%60;
    segundos = segundosin/1;
    segundosin=segundosin%1;

    printf("Dias %d\n", dias);
    printf("Horas %d\n", horas);
    printf("Minutos %d\n", minutos);
    printf("Segundos %d\n", segundos);


    return 0;
}