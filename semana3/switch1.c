/* Este me esta costando un poco de trabajo :( */


  #include <stdio.h>
  #include<math.h>
  

    int main()
                          {
    float Tc,Tk,Tf;
    int opcion;
    float x,y,r,t,s,u;
     printf("Teclear una opción \n");
     printf("(1) para convertir temperaturas\n");
     printf("(2) para convertir coordenadas\n");
     scanf("%i",&opcion);
     
    switch(opcion)
                          { 
    case 1:
       printf("Sí estás aquí es porque quieres convertir temperaturas\n");
       printf("Vamos a empezar a convertir temperaturas\n");
       printf("Ingresa una temperatura en grados centígrados\n");
        scanf("%f",&Tc);
       printf("La primera temperatura es en Kelvin y la segunda es en Farenheit\n");
      Tk=Tc+273.15;
       printf("Esta es tu primer temperatura %f\n",Tk);
      Tf=(Tc*1.8)+32;
       printf("Esta es tu segunda temperatura %f\n",Tf);
       printf("Ahora vamos a regresar de farenheit a centigrados\n");
      Tc=(Tf-32)/1.8;
       printf("Esta es la temperatura que ingresaste %f\n",Tc);
    break;
/* s= Cuadrante I, u=Cuadrante II, p=Cuadrante III, w=Cuadrante IV*/
    case 2:

   printf("Si estás aquí es porque quieres convertir coordenadas\n");
   printf("Convertiremos coordenadas cartesianas a coordenadas polares, por favor ingresa tu coordenada en el eje x\n");
   scanf("%f",&x);
   printf("Ingresa tu coordenada en el eje y\n");
   scanf("%f",&y);
  if(x>=0 && y>=0){
   printf("El punto que estas buscando se encuentra en el cuadrante I\n");
 r=sqrt(x); 
   printf("Su posición en r es %f\n",r);
 t=atan(y/x);
 s=t*57.2958;
                   
   printf("Su angulo de inclinación con respecto a x es %f\n",s);
   }else  if(x<0 && y>0)         
                 {
   printf("El punto que estas buscando se encuentra en el cuadrante II\n");
   printf("Su posición en r es %f\n",r);
   u=180-s;
   
  
   }
        
   
   break;

   default:
     printf("Opción invalida");
     break;
           }
    return 0;
 
  }



