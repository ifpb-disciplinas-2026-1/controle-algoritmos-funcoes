#include <stdio.h>
void trocarValores(int *a, int *b){
   int auxiliar = *a;
   *a = *b;
   *b = auxiliar;
}

// void trocarValores(int a, int b){
//    int aux=a;
//    a=b;
//    b=aux;
//    printf("dentro da função > a:%d, b:%d\n", a, b);
// }
int main(){
   int a=7,b=9;
   printf("antes > a:%d, b:%d\n", a, b);
   // trocarValores(a, b);
   trocarValores(&a, &b);
   printf("depois > a:%d, b:%d\n", a, b);
   return 0;
}