/*Este ejercicio fue hecho por José Díaz*/

#include<stdio.h>
#include<stdlib.h>
	int main() {
		
		FILE *fp;
				
		int i,N=0;		
		float x[N],y[N],z[N];		
		float a,b,es;
		
			printf("\tHola\n");
			printf("Este programa genera una secuencia de coordenadas (x,y,z)\n");
			printf("Ingresa la cantidad de coordenadas que quieres generar\n");
			scanf("%i",&N);
			printf("Ahora ingresa el inicio de tu intervalo\n");
			scanf("%i",&a);
			printf("Ingresa el final de tu intervalo\n");
			scanf("%i",&b);
			es=(b-a)/N;
			printf("\n%i %f %f\n",N,a,b);
			printf("%f\n",es);
			x[0]=a;
			y[0]=a;
			z[0]=a;
		for(i=1 ; i<=N ; i++){
			
			x[i]=x[i-1]+es;
			y[i]=y[i-1]+es;
			z[i]=z[i-1]+es;
			
			printf("i \t x \t  \t y \t \t z \n");
			printf("%f \t %f \t %f \t %f \n",x[i],y[i],z[i]);
			
		}
			fp=fopen("Datos.txt","w");
			fprintf(fp,"x \t  \t y \t \t z \n");
			fprintf(fp,"%f \t %f \t %f \n",x[i],y[i],z[i]);
			
			fclose(fp);
		
			return 0;
		}
