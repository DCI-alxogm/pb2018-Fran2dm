/*Este archivo fue creado por José Díaz*/

#include<stdio.h>

	

		int main(){

	int i,N,d;
	int numeros[N];
	
		printf("Vamos a guardar una lista de números\n");
		printf("Introduce la cantidad de números que quieres guardar:\n");
//En esta parte pedimos la cantidad de números que el usuario quiere guardar.
		scanf("%i",&N);
/*El usuario va a ingresar los valores a los números que quiere guardar*/   		
   		for(i=0;i<N;i++){
      		printf("Introduce los %i números\n",N);
      		scanf("%i", &numeros[i]);
      		}
// Se imprime a la pantalla los valores que el usuario ingreso
		
  		 for(i=0;i<N;i++){
      		
		printf("\nEl número %i que ingresaste es %i \n",i,numeros[i]);
      		
		}

		return 0;
		}

