/*Este programa fue creado por José Díaz*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

	int main(){


	FILE *datos;
		int i,x;
		float p;
		float *ptr= (float*)malloc(x*sizeof(float));
		x=0,p=0;
		
			printf("Escribe el numero de datos que hay en tu archivo: ");
			scanf("%d",&x);
			datos=fopen("promedio.txt","r");
		for (i=0;i<x;i++){

			fscanf(datos,"%f\n",&ptr[i]);
			p += ptr[i];
		}
			fclose(datos);
			p=p/x;
			printf("El promedio es: %f\n",p);
			free(ptr);
			return 0;
			}
