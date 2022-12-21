/****************************************************************************************************
*file: numpari.c                                                                                    *
*autore: Rodini Riccardo                                                                            *
*classe: 3H                                                                                         *
*data: 16/11/22                                                                                     *
****************************************************************************************************/
#include<stdio.h>
int main()
{
	int num;
	int c=0;
	
	do{
		printf("inserisci un numero\n");
		scanf("%d",&num);
		if(num%2==0)
			c++;
	}while(num!=0);
	
      c--;
	printf("hai inserito %d numeri pari",c);
}
