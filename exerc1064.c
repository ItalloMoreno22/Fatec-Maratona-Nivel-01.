




#include <stdio.h>  
/*
Author: Itallo Rodrigues Moreno*/

int main ()
{
	
    
 	int number, i;

    for(i=0; i<6; i++){

	printf("Digite um numero: "); scanf("%d", &number);

	if(number>0)
	{
	printf("%d e positivo", number);
	}
	
	else if(number<0)
	{
	printf("%d e negativo", number);
	}
	
	else
	{
	printf("%d e nulo", number);
	}
    }
return 0;
}