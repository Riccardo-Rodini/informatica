/*
file: resto.c
autore: Rodini Riccardo
data: 5/10/22
classe: 3H


*/
#include <stdio.h>  //printf,scanf;
#include <math.h>
int main()
{
	int num1,num2;
	int resto;
	printf("inserisci il primo numero da dividere\n");
	scanf("%d",&num1);
	printf("inserisci il secondo numero\n");
	scanf("%d", &num2);
	resto= num1 % num2;
	printf("resto\t %d",resto);
	return 0;
	
	
	
	
	
	
}
