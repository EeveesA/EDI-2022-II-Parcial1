#include <stdio.h>
int main()
{
  float preciop;
  int descuento;
  float total;
  float cdescu;


  printf("Dime el precio de un producto : \n");
  scanf("%f", &preciop );
  printf("Dime el descuento del producto: \n");
  scanf("%d", &descuento);
  cdescu = ((float)descuento / 100) * preciop;
  total = preciop - cdescu;
  printf("El total es de: \n");
  printf("%.2f", total);
   return 0;
}
