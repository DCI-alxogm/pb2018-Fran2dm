/* Este es el segundo ejemplo utilizando if else*/

#include<stdio.h>
int main()
{
/*En esta parte del programa estamos declarando las variables enteras con las que vamos a estar trabajando durante el programa (sustituí numero1 y numero 2 y utilicé a y b)*/
int a,b;
printf("Introduzca dos números enteros\n");
scanf("%i %i", &a, &b);
/*En esta parte del programa estamos poniendo condiciones que las entradas deben de cumplir para que el programa continue con las instrucciones de if*/
if (a==b) 
{
printf("Resultado: %d = %d", a,b);
}
/*En esta parte del programa estamos poniendo las condiciones que las entradas deben de cumplir si estas no cumplieron la primera condición para continuar con las segundas instrucciones */
else if (a>b)
{
printf("Resultado: %d > %d",a,b);
}
/*En caso de no cumplir ninguna de las condiciones anteriores el programa hará lo siguiente*/
else
{
printf("Resultado: %d < %d", a,b);
} 
return 0;
}
