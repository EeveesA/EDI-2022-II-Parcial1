#include <stdio.h>

int main() {
    int hora;
    int minutos;

    printf("¿Que hora es?\n");
    printf("(En horas y minutos)\n");
    printf("Horas: ");
    scanf("%d", &hora);
    printf("Minutos: ");
    scanf("%d", &minutos);
    if (minutos<=60) {
        if (hora <= 11 && hora >= 0) {
            printf("Buenos Dias");
        }
        else if (hora>= 12  && hora<= 17 ) {
            printf("Buenas Tardes");
        }
        else if (hora <= 23 && hora >= 18) {
            printf("Buenas Noches");
        }
        else {
            printf("Hora no es valida");
        }

    }
    else {
        printf("Hora no es valida");
    }


    return 0;

}
