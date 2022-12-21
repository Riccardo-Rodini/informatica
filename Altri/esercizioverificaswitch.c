/***************************************** 
* file:                                  *
* autore:                                *
* classe:                                *
* data:                                  *
*****************************************/
#include<stdio.h>
int main()
{
	int voto;
	printf("inserisci voto\t");
	scanf("%d",&voto);
	switch(voto)
	{
		case 1 :
		case 2 :
		case 3 :
			printf("nettamente insufficiente");
			break;
		case 4 :
		case 5 :
			printf("insufficiente");
			break;
		case 6 :
		case 7 :
			printf("sufficiente");
			break;
		case 8 :
		case 9 :
		case 10 :
			printf("ottimo");
			break;
	}
	return 0;
}
