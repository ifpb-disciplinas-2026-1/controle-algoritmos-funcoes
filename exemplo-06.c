#include <stdio.h>
// declaração da função
int somarDoisNumeros(int primeiro, int segundo){
   primeiro = 5;
   return primeiro + segundo;
}
int main(){
   int a=7,b=9;
   printf("Antes de chamar a função > a:%d, b:%d\n", a, b);
   int valor = somarDoisNumeros(a, b);
   printf("Depois de chamar a função > a:%d, b:%d, soma: %d\n", a, b, valor);
   return 0;
}