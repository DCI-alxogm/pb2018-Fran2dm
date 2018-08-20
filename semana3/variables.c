/*Este programa recibe el valor de una variable x y evalua algunas funciones*/

#include<math.h>
#include<stdio.h>

int main()

{
float x,z,w,y,u;

printf("Hola, ingresa algún número\n");
scanf("%f",&x);
u=x/57.3;
printf("Vamos a realizar la primera operación\n");
printf("z=exp(-x)\n");
z=exp((-1)*x);
printf("Este es el resultado%f\n",z);
printf("Vamos a realizar la segunda operación\n");
printf("w=cos(u)+2tan(u/2)\n");
w=(cos(u)+2*tan(u/2));
printf("Este es el resultado%f\n",w);
printf("Vamos a realizar la tercera operación\n");
printf("y=log(x)+3x^2\n");
y=(log(u))+(pow(u,2)*3);
printf("Este es el tercer resultado%f\n",y);

return 0;

}
