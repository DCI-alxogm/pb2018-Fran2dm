/*Este programa fue creado por José Díaz*/

#include<stdio.h>
#include<math.h>

	int cuadrado();

		
		int main(){

			int a,x2;
			a=cuadrado(x2);
			printf("El valor de x^2 es: %i",a);
			return 0;
			}


	int cuadrado(){
	
	int x2,x;
	
	printf("Ingresa el valor de x");
	scanf("%i",&x);
	x2=pow(x,2);
	return x2;
	}
