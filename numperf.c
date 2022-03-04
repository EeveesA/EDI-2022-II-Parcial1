#include <stdio.h>

int main() {
    int n=0;
    int d=0;
    int i;
    int val;
    printf("Escribir numero a comprobar: \n");
    scanf("%d",&n );
    for (i = 1; i<n; i++){
        if (n % i ==0) d += i;
    }
    if (n==d){
        val = 1;
        printf("El numero ");
        printf("%d", n);
        printf(" es perfecto");
    }
    else {
        val = 0;
        printf("El numero ");
        printf("%d", n);
        printf(" no es perfecto");
    }





    return 0;

}