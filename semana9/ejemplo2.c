/*Este ejemplo fue creado por José Díaz*/

#include<stdio.h>
#include<math.h>

	float cuadrado(float h);
	
		int main(){
			float x,x2;
			
			printf("Introduce un número \n");
			scanf("%f",&x);
			x2=cuadrado(x);
			printf(" El cuadrado de %f es: %f\n",x,x2);
			return 0;
			}

	float cuadrado (float h){
		return pow(h,2);
		}
