//Especificando sua dimensão;
#include <stdio.h>
void imprimirVetor(int vetor[10]){
   vetor[2] = 11;
    for(int i=0;i<10;i++){
      printf("%d\t ", vetor[i]);
    }
   printf("\n");
}
int main() {
   int vetor[10] ={1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
   imprimirVetor(vetor);
   printf("\n%d\n", vetor[2]);
   return 0;
}