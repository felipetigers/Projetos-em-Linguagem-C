/*
Construir um programa que leia um valor numérico inteiro e apresente como resultado armazenado em memória os seus valores sucessor e antecessor.
*/

#include <stdio.h>

int main()
{
    int x;
    
    printf("Informe um numero inteiro qualquer: ");
    scanf("%d", &x);

    printf("O antecessor e o sucessor do numero informado sao, respectivamente, %d e %d: ", x-1, x+1);
    
    return 0;
}

