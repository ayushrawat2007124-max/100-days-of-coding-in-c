//Q124: Take two filenames from the user – a source file and a destination file. Copy all the content from the source file to the destination file using fgetc() and fputc().

/*
Sample Test Cases:
Input 1:
Source File: source.txt (Content: Learning C File Handling)
Output 1:
File copied successfully to destination.txt

*/
#include <stdio.h>

int main() {
    FILE *source, *dest;
    char srcName[50], destName[50];
    char ch;

    // Take filenames as input
    printf("Enter source file name: ");
    scanf("%s", srcName);

    printf("Enter destination file name: ");
    scanf("%s", destName);

    // Open source file in read mode
    source = fopen(srcName, "r");
    if (source == NULL) {
        printf("Error: Could not open source file!\n");
        return 1;
    }

    // Open destination file in write mode
    dest = fopen(destName, "w");
    if (dest == NULL) {
        printf("Error: Could not open destination file!\n");
        fclose(source);
        return 1;
    }

    // Copy content character by character
    while ((ch = fgetc(source)) != EOF) {
        fputc(ch, dest);
    }

    // Close both files
    fclose(source);
    fclose(dest);

    // Success message
    printf("File copied successfully to %s\n", destName);

    return 0;
}