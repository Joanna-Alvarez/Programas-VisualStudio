#include <stdio>

int main() 
{
    /*  Joanna Alvarez
    Equipo 1
    21 abr 21
    Programa 3. Pide dos valores, calcula el promedio y mustra el resultado
    */

    float primer, segundo, tercero;
    printf ("\n \n \nPrograma 3");
    printf ("Saca el promedio de valores reales");
    printf ("\n \n Dame el primer valor real ");
    scanf ("%f", &primer); //Permite capturar el valor real y lo guarda en variable primer
                //Para indicar la variable deonde se guarda usa &variabe
    printf ("\n \nDame el segundo valor real ");
    scanf ("%d", &segundo); //Permite capturar un valor real y lo guarda en variable primer
    Tercero = (primer + segundo)/2;
    printf ("\n El promedio es %f", tercero);
    return 0;
}