#include <stdio.h>
#include <string.h>

int main() {
    char sourceString[100]; 
    char destinationString[100];  

    printf("Enter a string: ");
    fgets(sourceString, sizeof(sourceString), stdin);  
    strcpy(destinationString, sourceString);

    printf("Source String: %s", sourceString);
    printf("Copied String: %s", destinationString);

    return 0;
}
