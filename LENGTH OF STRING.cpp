#include <stdio.h>
#include <string.h>

int main() {
    char inputString[100];  

    printf("Enter a string: ");
    fgets(inputString, sizeof(inputString), stdin);

   
    if (inputString[strlen(inputString) - 1] == '\n') {
        inputString[strlen(inputString) - 1] = '\0';
    }

    int length = strlen(inputString);

    printf("Length of the string: %d\n", length);

    return 0;
}
