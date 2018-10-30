
#include<stdio.h>
#include<math.h>

int main ()
{
	

	float x,y,z;
	int i,t;
	float a,b,c,d,e,f,n;
	
	FILE *res;
	res=fopen("funciones_evaluadas.txt","w");
	
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
			fprintf(res, "El valor de x es %f\n",x);
			fprintf(res,"El valor de la exponencial de x es %f\n",a);
			fprintf(res,"El valor del logaritmo de x es %f\n",b);
			fprintf(res,"El valor del seno de x es %f\n",c);
			fprintf(res,"El valor del coseno de x es %f",e);
			fprintf(res,"El valor de la raíz de x es %f",f);
			
		}
			
	
	return 0;
	fclose(res);
}

