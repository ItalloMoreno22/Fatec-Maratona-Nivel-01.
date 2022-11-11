#include <stdio.h>
/*Author: Itallo Rodrigues Moreno*/
 
int main() {
 
   int i,x;


   scanf("%d",&x);

   for(i = 0 ; i <= x ; i++){

        if( i % 2 == 1 ){
            printf("%d\n",i);
        }
   }

    return 0;
}