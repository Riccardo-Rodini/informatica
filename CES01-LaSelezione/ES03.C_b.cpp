/*
file: ES03.C_b
autore: Riccardo Rodini
classe: 3H
dat: 26/10/22
*/ 
#include<stdio.h>
int main()
{
	int num1,num2;
	printf("inserisci valore primo numero\t");
	scanf("%d",&num1);
	printf("inserisci valore secondo numero\t");
	scanf("%d",&num2);
	if(num1==num2)
	{printf("i numeri sono uguali");
	}
	else
	
	if(num1>num2)
	printf("e' maggiore");
	
	else
	{
		printf("e' minore");
	}
	return 0;
	
}
