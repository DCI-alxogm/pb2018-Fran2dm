/* Este programa fue creado por José Díaz*/

#include<stdio.h>
#include<math.h>

	void cuadrado(float x);


			int main ()
			{
			float x;
				printf("Escribe el valor de x\n");				
				scanf("%f",&x);
				cuadrado(x);
				return 0;
					}
			
	void cuadrado (float x){
		float x2;
			x2=pow(x,2);
			printf("El valor de x^2 es: %f",x2);
		}
