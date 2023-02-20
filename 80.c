#include <stdio.h>

int main() {
    FILE *fp;
    char text[1000];

    // Open the file in write mode
    fp = fopen("output.txt", "w");

    if (fp == NULL) {
        printf("Error opening file\n");
        return 1;
    }

    // Read input from the keyboard
    printf("Enter text: ");
    fgets(text, sizeof(text), stdin);

    // Write the input to the file
    fprintf(fp, "%s", text);

    // Close the file
    fclose(fp);

    return 0;
}
