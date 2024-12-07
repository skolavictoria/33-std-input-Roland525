#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
int result = 0, i = 0;
    if(argc > 3 || argc < 3){
        printf("Error: Please provide exactly two numbers.");
        return 1;
    }
       result =  atoi(argv[1]) + atoi(argv[2]);
       printf("Sum: %d", result);
    return 0;
}