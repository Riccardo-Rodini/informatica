/*
file: Triangoli.C
autore: Riccardo Rodini
classe: 3H
data: 28/10/22
*/
#include <stdio.h>

int main() 
{
	
	float a,b,c;
	
	printf("Inserisci i valori dei tre lati:\n");
	scanf("%f%f%f", &a,&b,&c);
	
	if (a==b || b==c || c==a )
		if (a==b && b==c)
			printf("E' un triangolo equilatero");
		else
			printf("E' un triangolo isoscele");
	else 
		printf("E' un triangolo scaleno");
}

