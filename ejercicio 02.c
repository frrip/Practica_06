/*jimenez martinez fernanda
practica 6
ejercicios de tipos de variables, entradas y salidas*/

#include <stdio.h> 

void main()
{
  int entnum;
  char carac = 65;  //convierte el numero en caracter ASCII.
  char carac2 = 'a';
  double punto;

  //Asignar valores de teclado a una variable
  printf("escriba un valor entero:");
  scanf("%i", &entnum);
  printf("escriba un valor real: ");
  scanf("%lf", &punto);
  
  //Imprimir valores de formato
  printf("\n imprimiendo las variables \a\n");
  printf("\t valor de numero entero es: %i \n", entnum);
  printf("\t valor del caracter ASCII es: %c \n", carac);
  printf("\t valor del caracter es %c \n", carac2);
  printf("\t valor del numero real es: %lf \n", punto);
  
}
