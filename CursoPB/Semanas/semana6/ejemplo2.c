/*Este programa fue creado por José Díaz*/
// Es el ejemplo 4 de la semana 6 del curso de programación básica.

#include<stdio.h>

		int main(){
			int i,N;
			int numeros[N];
// Este programa multiplica un listado de números por 2 e imprime a la pantalla cada resultado.	
		printf("Hola\n");
		printf("Este programa va a multiplicar un listado de valores por 2\n");
		printf("Ingresa la cantidad de números con los que quieres trabajar\n");	
		scanf("%i",&N);
//En esta parte del programa el usuario va a dar el valor a la cantidad de números con las que quiso trabajar.
		for(i=0;i<N;i++){
		printf("Ingresa sus valores\n");
		scanf("%i",&numeros[i]);
		numeros[i]=numeros[i]*2;
		}
		for(i=0; i<N ; i++){
		printf("El valor de los números es %i\n",numeros[i]);
		
		}
		
		return 0;
		}
