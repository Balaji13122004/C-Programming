#include <stdio.h>

int main() {
    char filename[100], text[1000];

    // Prompt user to enter file name and text
    printf("Enter name of file to open: ");
    scanf("%s", filename);
    printf("Enter the text: ");
    scanf(" %[^\n]", text);

    // Open the file in write mode
    FILE *fp = fopen(filename, "w");
    if (fp == NULL) {
        printf("Error opening file.");
        return 1;
    }

    // Write text to the file
    fprintf(fp, "%s", text);

    // Close the file
    fclose(fp);

    // Open the file in read mode
    fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("Error opening file.");
        return 1;
    }

    // Read and print the contents of the file
    printf("The file is successfully opened in c program.\n");
    char c;
    while ((c = fgetc(fp)) != EOF) {
        printf("%c", c);
    }

    // Close the file
    fclose(fp);

    return 0;
}
