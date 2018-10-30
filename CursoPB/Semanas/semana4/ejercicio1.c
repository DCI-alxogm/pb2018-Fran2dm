/* Primer programa utilizando switch */


  #include <stdio.h>
  #include<math.h>
  

    int main()
               {
               
    float Tc,Tk,Tf;
    int opcion;
    float x,y,r,t,s,u,p,w;
         
    
     printf("Teclear una opción \n");
     printf("(1) para convertir temperaturas\n");
     printf("(2) para convertir coordenadas\n");
     scanf("%i",&opcion);
     while(opcion==1 || opcion==2){
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
          
           r=sqrt(pow(x,2)+pow(y,2)); 
           t=atan(y/x);
           s=t*57.2958;
           u=180+s;
           p=180+s;
           w=360+s;
           

   if(x>0 && y>0){
          printf("El punto que estas buscando se encuentra en el cuadranteI\n");  
          printf("La magnitud del vector es: %f\n",r);
          printf("El ángulo que estás buscando es %f\n",s);
   }else if(x<0 && y>0){
          printf("El cuadrante en el que te encuentras es en el II\n");
          printf("La magnitud del vector es: %f\n",r);
          r=sqrt(pow(x,2)+pow(y,2)); 
          printf("El ángulo que estás buscando es: %f\n",u);
   }else if(x<0 && y<0){
          printf("El cuadrante en el que se encuentra tu punto es en el III\n");
          printf("La magnitud del vector es: %f\n",r);
          printf("El valor del ángulo es:%f",p);
   }else if(x>0 && y<0){
          printf("El cuadrante en el que se encuentra tu punto es en el IV\n");
          printf("La magnitud del vector es: %f\n",r);
          printf("El valor del ángulo es:%f",w);
   }if(x==0 && y==0){
          printf("El punto que estas buscando se encuentra en el origen\n");
   }else if(x==0 && y!=0){
          printf("El punto que estás buscando se encuentra sobre el eje y, por lo tanto la magnitud y ángulo del vector es 0");    
   }else if(x!=0 && y==0){
          printf("El punto que estás buscando se encuentra sobre el eje x, por lo tanto la magnitud y ángulo del vector es 0");
 
    } break;

   default:
           printf("Opción invalida, por favor ingresa algún digito");
     break;
      }     

    printf("Si quieres convertir de grados Celsius a Fahrenheit y a Kelvin de nuevo ingresa 1\n");
    printf("Si quieres convertir de coordenadas cartesianas a polares ingresa 2\n");
    printf("Si quieres salir del programa ingresa 3\n");
     scanf("%i",&opcion);
   
}
    return 0;
 
  }


