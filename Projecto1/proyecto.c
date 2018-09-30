/*Este programa fue creado por José Díaz Moya*/
#include<stdio.h> 
#include<math.h> 

	int main(){ 
	FILE*lec;  // Variable del archivo de lectura
	FILE*write; //Variable del archivo de escritura 

		lec=fopen("Basededatos.txt","r"); //Abro mi archivo de lectura
		double x[9],y[9],z[9],vx[9], vy[9], vz[9], r; // (x,y,z) son  las coordenadas del planeta (vx,vy,vz) son las velocidades del planeta, r es la distancia del planeta a la estrella.
		float to[9], N[9], G=4*pow(3.14159265359,2), k, h; //to es el tiempo 0, N es el tiempo de evolución , G es la constante de gravitación en unidades astronómicas, h es l 
		int i; //Se utiliza para el primer for
		char nombre[20];  // Se utiliza la variable nombre para que vaya leyendo los datos de Basededatos y les ponga el nombre de la va

		for(i=0; i<=8; i++){ 
		
			fscanf(lec,"%lf %lf %lf %lf %lf %lf %f %f %s %f", &x[i],&y[i],&z[i],&vx[i],&vy[i],&vz[i], &to[i], &N[i],&h, &nombre[i]));		
			write=fopen(nombre,"w"); 	
		for(k=to[i]; k<=N[i]+h ; k+=h){ 		 

			x[i]=x[i]+vx[i]*h; 
			y[i]=y[i]+vy[i]*h;  //Se utilizan para ir calculando las posiciones de cada planeta en cada paso de tiempo
			z[i]=z[i]+vz[i]*h;

			
			r=sqrt(pow(x[i],2)+pow(y[i],2)+pow(z[i],2)); // Calcula el radio del planeta a la estrella

			vx[i]=vx[i]-h*((G*x[i])/pow(r,3));
			vy[i]=vy[i]-h*((G*y[i])/pow(r,3)); //Se utilizan para calcular la velocidad del planeta en cada paso de tiempo
			vz[i]=vz[i]-h*((G*z[i])/pow(r,3));	

		
			fprintf(write, "\n %f \t %lf \t %lf \t %lf \t %lf \t %lf \t %lf \n", k*365.2, x[i], y[i], z[i], vx[i], vy[i], vz[i]);
			//Escribe en los archivos de los planetas las coordenadas (x,y,z) y la velocidad que lleva en sus componentes(vx,vy,vz)
		} 
		} 
				fclose(write);  //Cierro el archivo de escritura
				fclose(lec);    //Cierro el archivo de lectura
		
		
				return 0; 
					}
