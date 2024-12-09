#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    if(argc < 2){
        printf("Error: No words to count.\n");
    return 1;
    }
    for(int i = 1; argc > i; i++){
        int wordcount = 0;
    for (int b = 1; argc > b; b++){
        if (strcmp(argv[i], argv[b]) == 0){
            wordcount++;
        }
    }
    printf("%s: %d\n", argv[i], wordcount);
    }
    return 0;
}