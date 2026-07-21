#include <stdio.h>
void imprimir(){
    printf(" - ");
    imprimirVetor(); //recursividade
}
int main() {
  imprimir();
  return 0;
}