#include <stdio.h>
#include <string.h>

int main(){
    char overT1[11][2][30];
    char overT2[11][2][30];
    char time1[30], time2[30];
    int peso;
    char* token;
    int media; 
    int valor;

    fgets(time1, 30, stdin);
        for (int i = 0; i < 11; i++)
        {   
            fgets(overT1, 30, stdin);
            token = strtok(overT1, ";");
            for (int j = 0; j < 2; j++)
            {
                token = strtok(NULL, ";");
                printf(" %s", token);
                strcpy(overT1[i][j], token);
            }

        }

        for (int i = 0; i < 1; i++)
        {
                if (overT1[i][0] == G)
                {
                    peso = 8;
                    valor = peso*atoi(overT1[i][1]);
                } 

        }
        
    
    fgets(time2, 30, stdin);
        



}
