#include <stdio.h>
/*Author: Itallo Rodrigues Moreno*/
int main(){

int cont, num;

scanf("%d", &num);
for(cont=1;cont<=10000;cont++){
if(cont%num==2){
printf("%d\n", cont);
}
}
return 0;
}
