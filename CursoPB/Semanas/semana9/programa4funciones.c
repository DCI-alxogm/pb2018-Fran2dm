/*Este programa fue creado por José Díaz*/

#include<stdio.h>
#include<math.h>
	
	void a(); //Sin entrada y sin salida
	float b (); //Sin entrada pero con salida
	void c( x2); //Con argumento de entrada pero sin salida
	float d(x3); //Con argumento de entrada y salida


		int main () {
				
			int o;
			float x1,x2,x3,r;
							
					
				printf("Hola\n");
				printf("Escoge una opción\n");
				printf("Muestra el valor de x número que vas a ingresar (1):\n");
				printf("Calcula el valor de x²: (2)\n");
				printf("Calcula el valor de x³: (3)\n");
				printf("Calcula el valor de x⁴: (4)\n");
				scanf("%i",&o);
			switch(o){

			case 1:
				
				printf("Escogiste la opción 1\n");
				a();
			break;
			
			case 2:
	
				printf("Escogiste la opción 2\n");
				x1=b();
			break;
			
			case 3:
			
				printf("Escogiste la opción 3\n");
				printf("Ingresa el valor de x\n");
				scanf("%f",&x2);
				c(x2);
			break;

			case 4:

				printf("Escogiste la opción 4\n");
				printf("Introduce el valor de x\n");
				scanf("%f",&x3);
				r=d(x3);
				printf("El valor de x⁴ es %f\n",r);
			default:
				printf("Opción invalida");
			break;
			}

			return 0;
			}
			
		void  a (){
			float x;
			
				printf("Ingresa el valor de x\n");
				scanf("%f",&x);
				printf("El valor de x es: %f",x);
			}

		float b(){
			float x,x1;
				printf("Ingresa el valor de x\n");
				scanf("%f",&x);
				x1=pow(x,2);
				printf("El valor de x² es: %f",x1);
				return x1;
				}		
			
		void c (x2) { 
			float y;
				printf("x2=%f",x2);
				y=x2*x2*x2;
				printf("El valor de x³ es: %f\n",y);
				}				
		float d (x3){
			float y;
				
					y=pow(x3,4);
				return y;
				}
				
		
					

								
				

	
		
