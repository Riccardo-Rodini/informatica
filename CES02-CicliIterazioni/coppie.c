/** ****************************************************************************************
* \mainpage coppie.c
*
* @brief Scrivere un programma che visualizzi tutte le coppie ordinate di numeri naturali la cui somma e' 15
* <specifiche del progetto>
* <specifiche del collaudo>
* 
* @author Rodini riccardo
* @date 4/11/22 
* @version 1.0 4/11/22  Versione iniziale
*/
#include <stdio.h>

int main()
{
	int a,b;
	printf("Esercizio B Riccardo Rodini\n");

	for(a=1; a<8; a++) 
	{
		for(b=1; b<15; b++)
		{
			if(a+b==15)
			{
				printf("%d e %d\n",a,b);
			}
		}
	}
}
