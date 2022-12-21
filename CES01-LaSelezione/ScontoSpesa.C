/*
file: ScontoSpesa.C
autore: Riccardo Rodini
classe: 3H
data: 28/10/22
*/
#include <stdio.h>

int main() {
  float importoIn;
  float importoOut;
  
  printf("Inserisci il totale della spesa: ");
  scanf("%f", &importoIn);
  
  if (importoIn>50){
    if(importoIn>100) {
      importoOut = importoIn/100*90;
    } else {
       importoOut = importoIn/100*95;
      }
    printf("L'importo scontato e' %.2f", importoOut);
}
 else {
  printf("L'importo non e' sufficiente per applicare lo sconto");
  }
}


