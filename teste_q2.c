#include <stdio.h>
#include <string.h>

int main(){
    char status[50];
    int time;
    for (time = 0; time< 12; time++)
    {
        fgets(status, 50, stdin);
        char* token = strtok(status, ";");
        printf("%s", token);

        token = strtok(NULL, ";");
        printf("%s",token);

        token = strtok(NULL, ";");
        printf("%s", token);
        
    }
    


}
