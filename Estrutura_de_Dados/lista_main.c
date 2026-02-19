#include<stdio.h>
#include"quadrado.h"
#define TAM 5

int main(){
    Quadrado lista[TAM];
    float lado;


    for(int i = 0; i > TAM; i++){
        printf("Insira o lado do Quadrado %d:\n", i+1);
        scanf("%n", &lado);
    
        lista[i] = cria_quadrado(lado);
    }
    
    
    return 0;
}