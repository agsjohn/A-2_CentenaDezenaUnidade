#include <stdio.h>
#include <stdlib.h>
#include <string.h>

main(void) {
  int num, cal, cent, dez, un;
  printf("Digite um número entre 0 e 999: ");
  scanf("%i", &num);
  while(num < 0 || num > 999){
    printf("Número fora do solicitado, digite novamente: ");
    scanf("%i", &num);
  }
  printf("\n\n");
  cent = num / 100;
  cal = num - (cent * 100);
  dez = cal / 10;
  un = cal - (dez * 10);
  printf("Centenas: %i\n", cent);
  printf("Dezenas: %i\n", dez);
  printf("Unidades: %i\n", un);
}