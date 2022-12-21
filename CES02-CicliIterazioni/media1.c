/** ****************************************************************************************
* \mainpage <divisori.c>
*
* @brief Si scriva un programma per calcolare la media aritmetica di una serie di numeri 
* inseriti da tastiera. L’introduzione del valore 0 indica il termine del caricamento dei 
* dati.
* 
* @author <rodini riccardo>
* @date <4/11/22> 
* @version 1.0 <data> Versione iniziale
* @version 1.1 <data> <Descrivere le modifiche apportate>
*/

#include<stdio.h>                        
int main()
{
	int n, cont=0;
	int somma=0;	//Conterrà le somme parziali e quella finale dei numeri inseriti
	float media=0;

	do
	{
		printf("inserisci un numero\t");
		scanf("%d",&n);

		somma += n; //Aggiorna somma aggiungendo il valore n inserito
		
		//Aggiorno il contatare cont con il numero dei valori inseriti
		if(n!=0)
			cont++;
	}
	while (n!=0); //continua fino a chè n!=0
	
	media = somma/(float)cont;
	printf("la media dei voti e %.2f\n",media);
}