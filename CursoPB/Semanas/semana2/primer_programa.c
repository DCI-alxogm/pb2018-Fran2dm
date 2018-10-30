/* Creado el 13 de agosto de 2018 por José Díaz*/

#include<stdio.h>

int main()
{
       int edad,edad2;
       char nombre[20];
 printf("¿Cómo te llamas?");
 scanf("%s", &nombre);
 printf("Este es el 1er programa del curso\n");
 printf("Dime tu edad\n");
 scanf("%i",&edad);
 edad2=edad+10;
 printf("\n%s tu edad en el 2028 será:%i: \n",nombre,edad2);


return 0;

}
