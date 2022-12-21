/*
file: 
autore: Riccardo Rodini
data: 7/10/22
classe: 3H
*/
#include<stdio.h>
int main()
{

//dichiariamo input
 
 int n1;
//dichiariamo output
 int cif1,cif2,cif3;
printf("inserisci numero compreso tra 100 e 999\n");
scanf("%d",&n1);
cif1=n1/100;
cif2=(n1-cif1*100)/10;
cif3=(n1-(cif1*100+cif2*10));
printf("%d \t  %d  \t   %d  \t",cif1,cif2,cif3);
return 0;

}
