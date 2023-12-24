#include <stdio.h>

int main()
{
    float height;
    float Weight;
    float imc;
    
    printf("Bem vindo ao programa de calculo do IMC!\n");
    
    printf("Digite sua altura (metro e cm, separados por ponto): ");
    scanf("%f", &height);
    
    printf("Digite o seu peso(em Kg):");
    scanf("%f", &Weight);
    
    imc = Weight / (height * height);
    printf("O seu IMC é: %.2f", imc);
    printf("\nO IMC ideal fica entre  18,5 a 24,9");
    
    
    
    

    return 0;
}
