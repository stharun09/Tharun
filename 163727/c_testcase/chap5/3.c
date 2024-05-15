#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void concatenateStrings(char *str1, char *str2, char *result) {
    if (str1 == NULL || str2 == NULL) {
        strcpy(result, "Invalid input");
        return;
    }
    
    if (*str1 == '\0') {
        strcpy(result, str2);
        return;
    }
    
    if (*str2 == '\0') {
        strcpy(result, str1);
        return;
    }
    
    char *ptr = strchr(str1, '*');
    if (ptr != NULL) {
        *ptr = '\0'; // Replacing '*' with NULL character
        strcpy(result, str1);
        strcat(result, str2);
    } else {
        strcpy(result, str1);
        strcat(result, str2);
    }
}

int main() {
    char str1[100], str2[100], result[200];
    
    // Taking input from the user
    printf("Enter Str1: ");
    fgets(str1, sizeof(str1), stdin);
    printf("Enter Str2: ");
    fgets(str2, sizeof(str2), stdin);
    
    // Removing newline characters from the input strings
    str1[strcspn(str1, "\n")] = '\0';
    str2[strcspn(str2, "\n")] = '\0';
    
    // Concatenating the strings
    concatenateStrings(str1, str2, result);
    
    // Printing the result
    printf("Result: %s\n", result);
    
    return 0;
}

