/* Este es el 2do programa en clase de programación,vamos a jugar con algunas operaciones.*/

#include<stdio.h>

int main()
 {
       int a, b, c, d, e1, e2, e3, e4;
      
     printf("Vamos a resolver algunas operaciones, por favor sigue las instrucciones\n");
     printf("Escribe tu primer número \n");
     scanf("%i",&a);
     printf("Escribe tu segundo número \n");
     scanf("%i",&b);
     printf("Escribe tu tercer número \n");
     scanf("%i",&c);
     printf("Escribe tu cuarto número \n");
     scanf("%i",&d);
     printf("La primera operación es e=(a+b)*c/d \n");
     printf("La segunda operación es e=((a+b)*c)/d\n");
     printf("La tercera operación es e=(a+b)*c/d\n");
     printf("La cuarta operación es  e=a+(b*c)/d\n");
     e1=(a+b)*c/d;
     e2=((a+b)*c)/d;
     e3=(a+b)*c/d;
     e4=a+(b*c)/d;
     printf("Los resultados de las operaciones son %i, %i, %i, %i\n",e1,e2,e3,e4);
     printf("Espero te haya gustado");

     return 0;
    
     }
