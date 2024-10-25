#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main (int argc, char *argv[]) 
{
    int x = 0;
    int y = 157;

    while (x == 0){
        for (int i = 0; i < y; i++){
            
            usleep(3000);

            for (int j = 0; j < i; j++){
                printf("#");
            }
            printf("\n");
        }

        for (int i = y; i > 0; i--){
            usleep(3000);

            for (int j = 0; j < i; j++){
                printf("#");
            }
            printf("\n");
        }
    }
}