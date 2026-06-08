#include <stdio.h> // bibliotecas
int somarDoisNumeros(int primeiro, int segundo){ // declaração da função
  int resultado;
  resultado = primeiro + segundo;
  return resultado;
}
int main(){
    int resultado = somarDoisNumeros(3, 4); // chamando a função
    printf("%d\n", resultado);
    return 0;
}