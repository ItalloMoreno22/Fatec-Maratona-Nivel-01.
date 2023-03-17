#include <stdio.h>
/*Author: Itallo Rodrigues Moreno*/

int main() {
 int num1,num,cont;
  cont=0;
    for(num1=1;num1<=5;num1++){
        scanf("%d",&num);
        if(num%2==0)
            cont++;
    }
    printf("%d valores pares\n",cont);

    return 0;
}