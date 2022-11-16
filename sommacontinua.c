/***********************************************
*file: sommacontinua.c                         *
*autore: Riccardo Rodini                       *
*classe: 3H                                    *
*data: 16/11/22                                *  
***********************************************/
#include<stdio.h>
int main()
{
	int num;
	int somma;  //somma=0 
	
	do{
		printf("inserisci un numero intero\t");
		scanf("%d",&num);
		somma=num+somma;
	}while(num!=0);
	printf("la somma dei numeri inseriti e' %d",somma);
	return 0;
}
