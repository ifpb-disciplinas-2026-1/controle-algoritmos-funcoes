#include <stdio.h> // bibliotecas
// declaração da função
int somarDoisNumeros(int primeiro, int segundo){
  int resultado;
  resultado = primeiro + segundo;
  return resultado;
}
int main(){
    int a = 9;
    int resultado = somarDoisNumeros(3, 4); // chamando a função
    printf("%d\n", resultado);
    return 0;
}

