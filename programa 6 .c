#include <stdio.h>
int main () 
{
     /* Joanna Monserrat
    Equipo 1
    23 abr 21
    Programa 6. Pide dos valores reales, calcula multiplica, divide y muestra resultado
    */


   float base, altura, largo, volumen;
   printf ("\n\n Programa 6");
   printf ("\n\n Ingrese la base grande del trapecio");
   scanf ("%f",&base);
   printf ("\n\n Ingrese la base chica del trapecio");
   scanf ("%f",&base);
   printf ("\n\n Ingrese la altura del trapecio");
   scanf ("%f",&altura);
   printf ("\n\n Ingrese el largo del trapecio");
   scanf ("%f",&largo);
   volumen=base+base/2*altura*largo;
   printf ("\n\n El resultado es %f",volumen);


   return 0;
}
