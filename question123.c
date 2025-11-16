// Q123: Read a text file and count the total number of characters, words, and lines. A word is defined as a sequence of non-space characters separated by spaces or newlines.

/*
Sample Test Cases:
Input 1:
File: sample.txt (Content: Hello world\nThis is C programming)
Output 1:
Characters: 31
Words: 5
Lines: 2

*/
#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fp;
    char ch;
    int characters = 0, words = 0, lines = 0;
    int inWord = 0;

    // Open the file in read mode
    fp = fopen("sample.txt", "r");

    // Check if file opened successfully
    if (fp == NULL) {
        printf("Error: Could not open file!\n");
        return 1;
    }

    // Read file character by character
    while ((ch = fgetc(fp)) != EOF) {
        characters++;

        // Count lines
        if (ch == '\n')
            lines++;

        // Detect words
        if (!isspace(ch) && inWord == 0) {
            inWord = 1;
            words++;
        } else if (isspace(ch)) {
            inWord = 0;
        }
    }

    // If the file is not empty but doesn’t end with a newline
    if (characters > 0 && ch != '\n')
        lines++;

    // Close the file
    fclose(fp);

    // Display results
    printf("Characters: %d\n", characters);
    printf("Words: %d\n", words);
    printf("Lines: %d\n", lines);

    return 0;
}