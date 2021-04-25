#include <stdio.h>
int main () 
{
     /* Joanna Alvarez
    Equipo 1
    23 abr 21
    Programa 5. Pide dos valores reales, calcula multiplica, divide y muestra resultado
    */


float base, altura, area;
printf ("\n\n Programa 5");
printf ("\n\n Ingrese la base del triangulo");
scanf ("%f",&base);
printf ("\n\n Ingrese la altura del triangulo");
scanf ("%f",&altura);
area=base*altura/2;
printf ("\n\n El resultado es %f",area);

 return 0;
}