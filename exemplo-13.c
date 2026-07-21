// fatorial com Recursividade
/*
0! = 1
1! = 1 * 0!
2! = 2 * 1!
3! = 3 * 2!
4! = 4 * 3! 
n! = n * (n-1)!
*/
#include <stdio.h>
int fatorial(long numero){
  if(numero ==0) return 1; //caso base
  return numero * fatorial(numero - 1);
}
int main() {
  int fator = fatorial(4);
  printf("Fatorial: %d\n", fator);
return 0; 
}