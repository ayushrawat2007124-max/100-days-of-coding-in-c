//Q125: Open an existing file in append mode and allow the user to enter a new line of text. Append the text at the end without overwriting existing content.

/*
Sample Test Cases:
Input 1:
Existing File: data.txt (Content before execution: Hello world)
User Input: This is appended text.
Output 1:
File updated successfully with appended text.

*/
#include <stdio.h>

int main() {
    FILE *fp;
    char filename[50];
    char text[200];

    // Take filename input
    printf("Enter the filename: ");
    scanf("%s", filename);

    // Open file in append mode
    fp = fopen(filename, "a");
    if (fp == NULL) {
        printf("Error: Could not open file!\n");
        return 1;
    }

    // Clear input buffer (for safety after scanf)
    getchar();

    // Take new text input from the user
    printf("Enter text to append: ");
    fgets(text, sizeof(text), stdin);

    // Append the text at the end of the file
    fputs(text, fp);

    // Close the file
    fclose(fp);

    // Confirmation message
    printf("File updated successfully with appended text.\n");

    return 0;
}