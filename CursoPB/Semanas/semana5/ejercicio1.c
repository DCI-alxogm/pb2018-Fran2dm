/*Este programa evalua funciones (exp, log,sin,cos y sqrt) de una variable x en un intervalo con un espaciado definido por el usuario*/

#include<stdio.h>
#include<math.h>

int main ()
{
	float x,y,z;
	int i,t;
	float a,b,c,d,e,f,n;
	
	printf("¿Estás listo para comenzar?\n");
	printf("Ingresa 1 si estás listo\n");
	scanf("%i",&t);
	while(t==1)
	{
		printf("¡Hola!\n");
		printf("Este programa evalua las funciones (exp,log,sin,cos y sqrt) de una variable x en 			el intervalo que escojas \n");
		printf("Escoje el intervalo en el que quieres trabajar\n");
		scanf("%f %f",&z,&y);
		// z=x en la forma [x,y]
		printf("Escoje el número de espaciado que quieres\n");
		scanf("%f",&n);
		d=(y-z)/n;
	        for(i=0;i<=n;i++)
		{
			x = z + (i*d);
			// a=exp, b=log, c=sin, e=cos, f=sqrt
			a=exp(x);
			b=log(x);
			c=sin(x);
			e=cos(x);
			f=sqrt(x);
			printf("El valor de x es %f\n",x);
			printf("El valor de la exponencial de x es %f\n",a);
			printf("El valor del logaritmo de x es %f\n",b);
			printf("El valor del seno de x es %f\n",c);
			printf("El valor del coseno de x es %f",e);
			printf("El valor de la raíz de x es %f",f);
			printf("%i",i);
		}
			printf("¿Quieres realizar otra operación?\n");
			printf("En caso de querer realizar otra operación inserta 1, en caso contrario inserta 0\n");
			scanf("%i",&t);
	}
	return 0;
}





