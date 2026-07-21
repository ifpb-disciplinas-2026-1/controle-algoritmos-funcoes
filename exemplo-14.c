#include <stdio.h>
/*
1 1 2 3 5 8 13 21 ...
f(n) = f(n-1) + f(n-2)
*/
int fib(int n){
    // f(n) = f(n-1) + f(n-2)
    if(n <= 2) return 1; //caso base
    return fib(n-1) + fib(n-2); //recursividade
}
int main(){
    printf("%d\n", fib(7));
    return 0;
}