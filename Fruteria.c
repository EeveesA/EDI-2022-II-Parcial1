#include <stdio.h>

int main() {
    int kilos;

    printf("¿Cuantos kilos vas a comprar?\n");
    printf("Kilos: ");
    scanf("%d", &kilos);
    if (kilos <= 2 && kilos >= 0) {
        printf("0%% de descuento");
    }
    else if (kilos > 2  && kilos<= 5 ) {
        printf("10%% de descuento");
    }
    else if (kilos > 5 && kilos <= 10) {
        printf("15%% de descuento");
    }
    else if (kilos > 10 ) {
        printf("20%% de descuento");
    }



    return 0;

}