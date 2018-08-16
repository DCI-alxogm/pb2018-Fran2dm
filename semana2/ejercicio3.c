/*Esta es la continuación del ejercicio 2, sigamos divirtiendonos*/

#include<stdio.h>

 int main()
 
 {
float a,b,c,d;
	float e1,e2,e3,e4;

printf("Ronda número dos de operaciones, por favor sigue las instrucciones\n");
printf("En esta ocasión vamos a realizar las siguientes operaciones\n");
printf("Operación número uno e=(a+b)*c/d\n");
printf("operación número dos e=((a+b)*c/d\n");
printf("operación número tres e=(a+b)*c/d\n");
printf("operación número cuatro e=a+(b*c)/d\n");
printf("Asinga un valor a la letra a\n");
scanf("%f",&a);
printf("Asigna un valor a la letra b\n");
scanf("%f",&b);
printf("Asigna un valor a la letra c\n");
scanf("%f",&c);
printf("Asigna un valor a la letra d\n");
scanf("%f",&d);
e1=(a+b)*c/d;
e2=((a+b)*c)/d;
e3=(a+b)*c/d;
e4=a+(b*c)/d;
printf("El 1er resultado es %f\n",e1);
printf("El 2do resultado es %f\n",e2);
printf("El 3er resultado es %f\n",e3);
printf("El 4to resultado es %f\n",e4);
printf("Gracias por utilizarme, hasta la próxima");

return 0;

}
