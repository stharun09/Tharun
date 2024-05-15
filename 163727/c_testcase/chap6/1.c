/** 
 * Description: This program counts the frequency of each C keyword in a given file.
 * Author: Tharun Kumar
 * Created: [08/05/2024]
 * Modified: [08/05/2024]
 */

#include <stdio.h> // Standard input-output header for file handling and printf
#include <string.h> // String handling header for string comparison functions

#define NUM_KEYWORDS 32 // Number of C keywords

// List of C keywords
char keywords[NUM_KEYWORDS][20] = {
    "auto", "break", "case", "char", "const", "continue", "default", "do",
    "double", "else", "enum", "extern", "float", "for", "goto", "if",
    "int", "long", "register", "return", "short", "signed", "sizeof", "static",
    "struct", "switch", "typedef", "union", "unsigned", "void", "volatile", "while"
};

// Function to count keyword occurrences in a file
int main(int argc, char* argv[]) {
    char filename[100];

    // Check if the correct number of command-line arguments is provided
    if (argc != 2) {
        printf("Usage: %s <filename>\n", argv[0]);
        return 1;
    }

    // Copy the filename from command-line argument to a variable for later use
    strcpy(filename, argv[1]);

    // Open the file in read mode
    FILE *file = fopen(argv[1], "r");
    if (file == NULL) {
        printf("Unable to open file.\n");
        return 1;
    }

    // Array to store the count of each keyword
    int keyword_count[NUM_KEYWORDS] = {0};
    char word[100];

    // Read each word from the file and count keyword occurrences
    while (fscanf(file, "%s", word) != EOF) {
        for (int i = 0; i < NUM_KEYWORDS; i++) {
            if (strcmp(word, keywords[i]) == 0) {
                keyword_count[i]++;
                break;
            }
        }
    }

    // Close the file
    fclose(file);

    // Print the occurrences of each keyword
    printf("Occurrences of each keyword in %s:\n", filename);
    for (int i = 0; i < NUM_KEYWORDS; i++) {
        if (keyword_count[i] > 0) {
            printf("%s: %d\n", keywords[i], keyword_count[i]);
        }
    }

    return 0;
}

