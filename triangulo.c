#include <stdio.h>

int main() {
    int ladoa, ladob, ladoc;

    printf("¿Cuanto miden los lados del triandulo?\n");
    printf("Lado A: ");
    scanf("%d", &ladoa);
    printf("Lado B: ");
    scanf("%d", &ladob);
    printf("Lado C: ");
    scanf("%d", &ladoc);
    if (ladoa == ladob && ladob == ladoc) {
        printf("Es un triangulo equilatero");
    } else if ((ladoa == ladob && ladoa != ladoc) || (ladoa == ladoc && ladoa != ladob) || (ladob == ladoc && ladob != ladoa))  {
        printf("Es un triangulo isoseles");
    } else  {
        printf("Es un triangulo escaleno");
    }


    return 0;

}