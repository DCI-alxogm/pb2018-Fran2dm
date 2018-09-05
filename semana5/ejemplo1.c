/* Este es el primer ejemplo utilizando for*/

#include<stdio.h>
int main()
{
float k;
float C,f;
int n,i,d,s;
while(s<=1){



printf("Hola\n");
printf("Este programa imprime a la pantalla un listado n de temperaturas en Kelvin respecto a cierto rango\n");
printf("NOTA: ESTE PROGRAMA FUNCIONA UNICAMENTE CON CAMBIOS DE TEMPERATURA CON Ti>Tf\n");
printf("Vamos a definir el rango de temperaturas en el que quieres trabajar, ingresa una temperatura inicial y después una final en grados centigrados \n");
scanf("%f %f",&C,&f);
printf("El intervalo que ingresaste esta entre %f %f\n",C,f);
printf("Ingresa el número de renglones que quieres que te muestre\n");
scanf("%i",&n);

d=((f-C)/n);
for(i=0;i<=n;i++){
k=C+273.15;
printf("%f %f %f\n",C,k,d);
C=C+d;
}

printf("¿Quieres realizar otra operación?, si presiona 1, no presiona 2\n");
scanf("%i",&s);
}
return 0;
}
