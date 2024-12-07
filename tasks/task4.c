#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]){
    int result = 0, i = 0;
        if(argc != 4){
        printf("Error: Please provide an operation and two numbers.\n");
        return 1;
    }
    if(strcmp(argv[1], "add") == 0){
       result =  atoi(argv[2]) + atoi(argv[3]);
       printf("Result: %d\n", result); 
    }
    else if(strcmp(argv[1], "subtract") == 0){
       result =  atoi(argv[2]) - atoi(argv[3]);
       printf("Result: %d\n", result); 
    }
    else if(strcmp(argv[1], "multiply") == 0){
       result =  atoi(argv[2]) * atoi(argv[3]);
       printf("Result: %d\n", result); 
    }
    else if(strcmp(argv[1], "divide") == 0){
        if(atoi(argv[3]) == 0){\
        printf("Error: Division by zero is not allowed.\n");
        return 1;
        }
        result =  atoi(argv[2]) / atoi(argv[3]);
        printf("Result: %d\n", result); 
        }
    else{
        printf("Error: Unsupported operation. Use add, subtract, multiply, or divide.\n");
        return 1;
    }


    return 0;
}