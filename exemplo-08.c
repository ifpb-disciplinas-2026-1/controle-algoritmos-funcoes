#include <stdio.h>
int main() {
    int idade = 30;
    int numero= 15;
    int *ponteiro = &idade;
    printf("O valor da idade: %d\n", idade); //30
    printf("O valor do ponteiro: %d\n", *ponteiro); //30
    printf("O endereço da idade: %p\n", &idade);  //aexc455f88
    printf("O endereço do número: %p\n", &numero); //aexc455f89
    printf("O endereço do ponteiro: %p\n", ponteiro); //aexc455f88
    return 0;
}