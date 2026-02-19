#include<stdio.h>
#include"quadrado.h"
#define TAM 5

int main(){
    Quadrado lista[TAM];
    float lado;


    for(int i = 0; i < TAM; i++){
        printf("Insira o lado do Quadrado %d:\n", i+1);
        scanf("%f", &lado);
        
        lista[i] = cria_quadrado(lado);
    }
   
    int imaior_area = 0;
    int imaior_area = 0;

    

   /* Quadrado menor_area = lista[0];
    Quadrado maior_perimetro = lista[0];

    for(int i = 1; i < TAM; i++){
        if(calculo_area(lista[i]) < calculo_area(menor_area)){
           menor_area = lista[i];
        } 
    }

    printf("Menor Area dos Quadrados dados: %.2f\n", calculo_area(menor_area));

    for(int i = 1; i < TAM; i++){
        if(calculo_perimetro(lista[i]) > calculo_perimetro(maior_perimetro)){
           maior_perimetro = lista[i];
        } 
    }

    printf("Maior perimetro dos Quadrados dados: %.2f\n", calculo_perimetro(maior_perimetro));
    */

    return 0;
}