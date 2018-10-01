/*Este programa está siendo creado por José Díaz*/

#include<stdio.h>
#include<math.h>

	int main(){
		
			FILE *dt;
	int i,p,N,k,t;
								   // a=parte inicial del intervalo; b=parte final del intervalo; s=resultado de la función f(x)=x^p ; t= cantidad de trapecios
	float a, b, r, s, x, aux, h;
							           //En esta parte del programa le doy las instrucciones al usuario		
		printf("Hola\n");
		printf("Esta parte del programa evalua la función f(x)=x^p\n");
		printf("Crea un archivo en donde este escrito el valor de el intervalo (a,b), el valor de p,el valor de x y el número de veces que quieras evaluar la función y  con nombre Datos.txt\n");
		dt=fopen("Datos.txt","r");		           //Lee los datos del archivo Datos.txt
		fscanf(dt,"%f %f %i %i %i",&a,&b,&p,&N,&t);
		aux = (b-a)/N;					   //aux es el número de x que quieres evaluar dentro del intervalo
			FILE *wr; 				   // Abro un programa llamado Resultados.txt que es donde va a empezar a escribir
		wr=fopen("Resultados.txt","w");
		for (i=0;i<N;i++){
			x=a+(i+1.0)*aux; 			  //El valor de x va del intervalo inicial + i+1 (por qué i inicia en 0) * aux es para evaluar el valor de las x 			
			s=pow(x,p); 				 // s es la función f(x)
			printf("Con x=%f tu resultado es: %f \n",x,s);
			h=(x-a)/t; 
			r=(pow(a,p)+s)/2;			 //Esta es la primera parte de la suma
		for (k=1;k<=t;k++){ 
			r+=pow((a+k*h), p);			 //Esta es la suma de la primera parte más la segunda parte de la suma.
		}
			r*=h; 					// termino de calcular la integral
			printf("Tu integral es: %f \n",r);
			fprintf(wr,"El valor de f(x) es: %f\n",s); //Imprime en el text
			fprintf(wr,"El valor de tu integral es %f",r);	
		}
		
	fclose(dt);
	fclose(wr); 
		
	return 0;
		


		}
		
						
		
		
	
