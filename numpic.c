#include <stdio.h>

int main() {
    int n=0;
    int d=0;
    int M=0;
    int m=999999999;
    int i;
    printf("Ingresar cantidad de datos: \n");
    scanf("%d",&n );
    for (i = 0; i<n; i++){
        printf("Ingresar datos de uno en uno: ");
        scanf("%d", &d);
        if (d >= M) {
            M = d;
        }
        if(d <= m){
            m=d;
        }

    }
    printf("Mayor: ");
    printf("%d", M);
    printf("\n");
    printf("Menor: ");
    printf("%d", m);






    return 0;

}