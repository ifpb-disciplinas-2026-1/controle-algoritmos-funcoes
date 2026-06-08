#include <stdio.h> // bibliotecas
// protótipo ou assinatura da função
int somarDoisNumeros(int primeiro, int segundo);
int main(){
    int resultado = somarDoisNumeros(3, 4); // chamando a função
    printf("%d\n", resultado);
    return 0;
}
// declaração da função
int somarDoisNumeros(int primeiro, int segundo){
  int resultado;
  resultado = primeiro + segundo;
  return resultado;
}
