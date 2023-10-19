#include <stdio.h>



int main(){
    
    int vetor[10],npos, vezes;
    
   for (int i = 0; i < 10; i++)
   {
        scanf("%d", &npos);
        printf("%d ", npos);
        vetor[i] = npos;      
   }
   printf("\n");
        for (vezes= 9 ;vezes >-1; vezes--)
                
            {
                for (int i = 0; i < vezes; i++)
                    { 
                        vetor[i] += vetor[i+1];
        
                        printf("%d ", vetor[i]);
                        
                    }
                printf("\n");
            }



return 0;
}
    
