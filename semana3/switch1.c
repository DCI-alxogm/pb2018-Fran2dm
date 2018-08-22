/*  */


  #include <stdio.>
  #include<math.h>
  

int main()
  {
        float Tc,Tk,Tf;
        int opcion;
        float x,y,r,t;
     printf("Teclear una opción \n");
     printf("(1) para convertir temperaturas\n");
     printf("(2) para convertir coordenadas\n");
     scanf("%i",&opción);
     
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
       printf("Ahora vamos a regresar de farenheit a centigrados");
       Tc=(Tf-32)/1.8;
       printf("Esta es la temperatura que ingresaste%f\n",Tc);
    break;

   case 2:

   printf("Si estás aquí es porque quieres convertir coordenadas\n");
   printf("Convertiremos coordenadas cartesianas a coordenadas polares, por favor ingresa tu   coordenada en el eje x\n");
   scanf("%f",&x);
   printf("Ingresa tu coordenada en el eje y\n");
   scanf("%f",&y);
  if(x>=0) && (y>=0)
  

   

   
   break;

   default:
     printf("Opción invalida");
     break;
   }
    return 0;
 
  }



