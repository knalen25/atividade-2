#include <stdio.h>

int main(){
    
    int vetor[10],npos, valor, soma, posicao;
    
   for (int i = 0; i < 10; i++)
   {
        scanf("%d", &npos);
        printf("%d", npos);
        vetor[i] = npos;
        
   }
    printf("\n");
    for (int i = 0; i < 9; i++)
    { 
        vetor[i] += vetor[i+1];
        
        printf("%d ", vetor[i]);
    }
    
    printf("\n");
    for (int i = 0; i < 8; i++)
    {
        vetor[i] += vetor[i+1];
        
        printf("%d ", vetor[i]);
    }
    
    printf("\n");
    for (int i = 0; i < 7; i++)
    {
        vetor[i] += vetor[i+1];
        
        printf("%d ", vetor[i]);
    }

    printf("\n");
    for (int i = 0; i < 6; i++)
    {
        vetor[i] += vetor[i+1];
        
        printf("%d ", vetor[i]);
    }


    printf("\n");
    for (int i = 0; i < 5; i++)
    {
        vetor[i] += vetor[i+1];
        
        printf("%d ", vetor[i]);
    }

    printf("\n");
    for (int i = 0; i < 4; i++)
    {
        vetor[i] += vetor[i+1];
        
        printf("%d ", vetor[i]);
    }

    printf("\n");
    for (int i = 0; i < 3; i++)
    {
        vetor[i] += vetor[i+1];
        
        printf("%d ", vetor[i]);
    }

    printf("\n");
    for (int i = 0; i < 2; i++)
    {
        vetor[i] += vetor[i+1];
        
        printf("%d ", vetor[i]);
    }

    printf("\n");
    for (int i = 0; i < 1; i++)
    {
        vetor[i] += vetor[i+1];
        
        printf("%d ", vetor[i]);
    }

}
