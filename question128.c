//Q128: Read a text file and count how many vowels and consonants are in the file. Ignore digits and special characters.

/*
Sample Test Cases:
Input 1:
File: text.txt (Content: Welcome to C language)
Output 1:
Vowels: 8
Consonants: 10

*/
#include <stdio.h>
#include <ctype.h>  // for isalpha() and tolower()

int main() {
    FILE *fp;
    char ch;
    int vowels = 0, consonants = 0;

    // Open the file in read mode
    fp = fopen("text.txt", "r");

    // Check if file exists
    if (fp == NULL) {
        printf("Error: Could not open file!\n");
        return 1;
    }

    // Read each character
    while ((ch = fgetc(fp)) != EOF) {
        ch = tolower(ch); // Convert to lowercase for uniformity

        // Check if it's an alphabet
        if (isalpha(ch)) {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                vowels++;
            else
                consonants++;
        }
    }

    // Close the file
    fclose(fp);

    // Display results
    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);

    return 0;
}