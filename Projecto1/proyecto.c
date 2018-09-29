/*Este programa fue creado por José Díaz Moya*/

#include<stdio.h>
#include<math.h>

	int main (){
		FILE *lec;
		int N,c; //N es el tiempo de evolución que se va a graficar
		double r,G=4.0*pow(3.14159265359,2),Ms,h; 
	//r es el radio del planeta al sol, G es la constante de gravitación en años	Ms es la masa solar		
		double vxo,vyo,vzo; //Vno=Velocidades iniciales
		double vxi,vyi,vzi;	//Velocidades finales
		double xo,yo,zo;	//Posiciones iniciales	
		double xi,yi,zi;	//Posiciones finales
		int i;			//Se utiliza para el for 
		
			printf("Este programa calcula la órbita de los planetas del sistema solar \n");
			printf("A partir de establecer un conjunto de posiciones y velocidades a un tiempo to y las actualiza a un tiempo posterior ti\n");
			
			lec=fopen("Neptuno1.txt","r"); //Se leen los datos del planeta tierra
			fscanf(lec,"%lf %lf %lf %lf %lf %lf %lf %lf %i ",&xo,&yo,&zo,&vxo,&vyo,&vzo,&h,&Ms,&N);	
			FILE *rs;
			rs=fopen("Resultados.txt","w");	//Se prepara el programa para ingresar los resultados
			
			vxo*=365.242; //Se convierten las velocidades por día a velocidades por año que 365.242 es la cantidad de días por año
			vyo*=365.242;		
			vzo*=365.242;
				fprintf(rs,"Día       x		     y		    z	          vx	         	 vy   	        vz       	 r\n");
				c=0;
				for(i=0;i<=N;i++){  //El for se utiliza para evaluar las operaciones que están dentro del mismo N veces de uno en uno 
				
			
					xi=xo+(vxo*h);
					yi=yo+(vyo*h);			//Las primeras 3 ecuaciones sirven para encontrar la posición después de un tiempo h
					zi=zo+(vzo*h);  
					r=sqrt(pow(xo,2)+pow(yo,2)+pow(zo,2));	//Se calcula el radio de la estrella al planeta
					vxi=vxo-((h*G*Ms*xi)/pow(r,3));		
					vyi=vyo-((h*G*Ms*yi)/pow(r,3));		//Se calculan las velocidades finales después de un tiempo h
					vzi=vzo-((h*G*Ms*zi)/pow(r,3));
					
					xo=xi;
					yo=yi;
					zo=zi;		
 	//Estas 6 ecuaciones se utilizan para volver a iniciar las ecuaciones anteriores pero ahora los datos obtenidos serán las posiciones y velocidades iniciales
					vxo=vxi;
					vyo=vyi;
					vzo=vzi;
					if(c%500==0){
					fprintf(rs,"%i    	 %lf  	   %lf  	   %lf   	  %lf   	   %lf  	   %lf  	   %lf\n ",i,xi,yi,zi,vxi,vyi,vzi,r);	//Imprime los resultados en el archivo Resultados.txt			
			
			}
		c++;			
					

		}

		fclose(rs);
		fclose(lec);
	return 0;
		}
