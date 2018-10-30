/*Este es el primer ejemplo utilizando if else*/


#include <stdio.h> 
int main (){

  int a;
/* En esta parte del programa se le solicita al usuario ingresar un número*/
  printf("Introduce un número\n"); 
  scanf("%i",&a);
/*En esta parte del programa estamos poniendo las condiciones que la entrada debe de cumplir para poder decidir si el número es par*/
  if(a%2==0){
  printf(" a=%i es par\n",a);
/*En caso de no cumplir con la condición entonces el programa seguira las siguientes instrucciones*/
  }else{
  printf(" a=%i es impar\n",a);
  }
return 0;
 }
