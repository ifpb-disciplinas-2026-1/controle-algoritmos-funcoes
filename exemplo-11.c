//Passando como ponteiro
#include <stdio.h>
void imprimirVetor(int *vetor){//ponteiro
    for(int i=0;i<10;i++){
      printf("%d ", vetor[i]);
    }
    printf("\n");
}
int main() {
  int vetor[10] ={1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; 
  imprimirVetor(vetor);
  // int numero = 313;
  // imprimirVetor(&numero);
  return 0;
}