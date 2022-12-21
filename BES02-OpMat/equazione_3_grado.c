#include<stdio.h>
#include<math.h>

int main()
{
float a,b,c,d,x;
float risultato;

printf(" risoluzione equazione -ax^3 + bx^2 - cx + d \n");

printf("inserisci il valore di a \n");
scanf("%f", &a);

printf("inserisci il valore di b \n");
scanf("%f", &b);

printf("inserisci il valore di c \n");
scanf("%f", &c);

printf("inserisci il valore di d \n");
scanf("%f", &d);

printf("inserisci il valore di x \n");
scanf("%f", &x);

risultato = (-a*(pow(x,3)) + b*(pow(x,2)) - c*x + d);

printf("\n il risultato e %2.f", risultato);

return 0;
}

