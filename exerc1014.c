#include <stdio.h>

/*Author:Itallo Rodrigues Moreno*/

int main() {
  
  float distancia,volume,consumo;

 
  scanf("%f", &distancia);

  
  scanf("%f", &volume);

  consumo = distancia/volume;
  
 
  printf("%.3f km/l\n", consumo);

 

  return(0);
}