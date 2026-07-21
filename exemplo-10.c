////Sem declarar sua dimensão:
#include <stdio.h>
void imprimirVetor( int vetor[]){
// cuidado, como definir o fim o laço?
    for(int i=0;i<10;i++){
      printf("%d ", vetor[i]);
    }
    printf("\n");
}
int main() {
int vetor[10] ={1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; 
imprimirVetor(vetor);
return 0;
}