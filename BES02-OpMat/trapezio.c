/*
file: trapezio.c
autore: Rodini Riccardo
data: 7/10/22
classe: 3H
*/
#include<stdio.h>//printf,scanf
int main()
{
	//diciariamo imput
	int B1,b2,H;
	//di lavoro
	int L1,l2;
	//diciariamo output
	int area,perimetro;
	printf("inserisci valore base maggiore\t");
	scanf("%d", &B1);
	printf("inserisci valore base minore\t");
	scanf("%d",&b2);
	printf("inserisci valore altezza\t");
	scanf("%d",&H);
	printf("inserisci valore lato maggiore\t");
	scanf("%d",&L1);
	printf("inserisci valore lato minore\t");
	scanf("%d", &l2);
	//elaborazione: tutti i passaggi per passare dall'imput all'output
	area=((B1+b2)*H)/2;
	perimetro=B1+b2+L1+l2;
	printf("visualizza valore area \n%d\n",area);
	printf("visualizza valore perimetro \n%d",perimetro);
	return 0;	
}
