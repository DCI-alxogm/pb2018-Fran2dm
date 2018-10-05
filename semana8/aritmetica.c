
#include<stdio.h>
	
	int main () { 

		int MAX=3;
		int var[] = {10, 100, 200}; 
	// No definimos el tamaño del arreglo [] pues al utilizar {} queda implícito el tamaño y valores del arreglo
		int i, *ptr;
		ptr= &var;
		for (i=0; i<MAX ; i++){

			printf("La dirección de la variable var[%i] = %x\n",i,ptr);
		//Imprimo a la pantalla la dirección de la variable ptr
			printf("El valor de la vairable var[%i]=%i\n",i,*ptr);
			//Imprimo el valor de la variable ptr
			ptr++;
			}
			return 0;
			}
