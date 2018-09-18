/*Este programa está siendo creado por José Díaz*/

#include<stdio.h>
#include<math.h>

	int main(){
		
		FILE *dt;
		int i,p,N,k,t;
	// a=parte inicial del intervalo; b=parte final del intervalo; s=resultado de la función 
		float a, b, r, s, x, aux, h;
		printf("Hola\n");
		printf("Esta parte del programa evalua la función f(x)=x^p\n");
		printf("Crea un archivo en donde este escrito el valor de el intervalo (a,b), el valor de p,el valor de x y el número de veces que quieras evaluar la función y  con nombre Datos.txt\n");
		dt=fopen("Datos.txt","r");
		fscanf(dt,"%f %f %i %i %i",&a,&b,&p,&N,&t);
		aux = (b-a)/N;
		for (i=0;i<N;i++){
			x=a+(i+1.0)*aux;			
			s=pow(x,p);
			printf("Con x=%f tu resultado es: %f \n",x,s);
		h=(x-a)/t;
		r=(pow(a,p)+s)/2;
		for (k=1;k<=t;k++){ 
		r+=pow((a+k*h), p);
		}
		r*=h;
			printf("Tu integral es: %f \n",r);	
		}
		
		fclose(dt);

		return 0;
		


		}
		
						
		
		
	
