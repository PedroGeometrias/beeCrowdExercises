#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void createFile(char *input) {
    // Extract the second number from the input string
    int secondNumber;

    if (sscanf(input, "%*s %d", &secondNumber) != 1) {
        fprintf(stderr, "Error extracting the second number from input: %s\n", input);
        return;
    }

    // Generate the file name in the format <second_number>_Submission.c
    char fileName[50];
    sprintf(fileName, "%d_Submission.c", secondNumber);

    // Open the file for writing
    FILE *file = fopen(fileName, "w");

    if (file == NULL) {
        printf("Error opening file %s\n", fileName);
        exit(1);
    }

    // Write the content of the original string into the file 
    fprintf(file, "// CODE BY pedroGeometrias");
    fprintf(file, "\n// ID -> %d", secondNumber);

    // Close the file
    fclose(file);
}
int main() {
    // Open the input file for reading
    FILE *inputFile = fopen("input.txt", "r");

    if (inputFile == NULL) {
        printf("Error opening input file\n");
        return 1;
    }

    // Process each input string from the file
    char inputString[100];
    while (fgets(inputString, sizeof(inputString), inputFile) != NULL) {
        // Remove the newline character at the end of the string
        inputString[strcspn(inputString, "\n")] = '\0';

        // Create a file for each input string
        createFile(inputString);
    }

    // Close the input file
    fclose(inputFile);

    return 0;
}

