/*\
file: secondi-minuti-ore
autore: Rodini Riccardo
data: 12/10/22
classe: 3H


numero di secondi trasformato in secondi,minuti,ore



*/
#include<stdio.h>
int main ()
{
    printf("PROGRAMMA DI RICCARDO RODINI 3H\n");
	//dichiariamo le variabili di imput
	int sec1;
	//dichiariamo le variabili di output
	int ore,min,sec2;
	int secondi_iniziali;
	//richiesta imput
	printf("inserisci i secondi\t");
	scanf("%d",&sec1);
	
	secondi_iniziali= sec1;
	//elaborazione: tutte le istruzioni per passare dall'imput all'output
	//assegna alla variabile ore uil risultato dell'espressione
	ore=(min - min % 60)/60;
	//assegna alla variabile min il risultato dell'espressione 
	min=(sec1 - sec1 %60)/60;
	//assegna alla variabile sec2 il risultato dell'espressione
	sec2=sec1 % 60;
	
	//visualizza in output
	printf("%d = %d h, %d m %d s", secondi_iniziali, ore, min, sec2);
	return 0;
}
