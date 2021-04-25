#include  <stdio>
int  main () 
{
    / *   Joanna Alvarez
    Equipo 1
    21 abr 21
    Programa 2. Pide dos valores, loa suma y muestra el resultado
    * /
    int a, b, c;  // Recibe valores enteros.
    printf ( " \ n  \ n  \ n  \ n Programa 2 \ n " );
    printf ( " Suma de numeros enteros \ n " );
    printf ( " \ n  \ n Dame el valor entero a: " );
    scanf ( " % d " , & a); // Si Vas a recivir un valor entero usa% d
                // Para indicar la variable deonde se guarda usa & variabe
    printf ( " \ n  \ n Dame el valor entero b: " );
    scanf ( " % d " , & b); // Permite capturar un valor entero
    c = a + b;
    printf ( " \ n El resultado es % d " , c);
    return  0 ;
}          