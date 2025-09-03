#include <stdio.h>

#define TAMANHO 10

int main()
{

    int valores[TAMANHO], maior, i;

    printf("Digite 10 números: ");
    for(i = 0; i < TAMANHO; i++)
    {
        scanf("%d", &valores[i]);
    }

    maior = valores[0];

    for(i = 1; i < TAMANHO; i++)
    {
        if(valores[i] > maior)
        {
            maior = valores[i];
        }
    }

    printf("O maior valor é: %d\n", maior);

    return 0;
}