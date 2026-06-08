#include <stdio.h>
// declaração da função
int somarDoisNumeros(int primeiro, int segundo){
   // primeiro e segundo tornam-se locais
   int resultado;
   resultado = primeiro + segundo;
   return resultado;
}
int main(){
   int a=7,b=9;
   int valor = somarDoisNumeros(a, b);
   printf("> a:%d, b:%d, soma: %d\n", a, b, valor);
   return 0;
}