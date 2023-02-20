#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file1, *file2, *merged_file;
    char ch;

    // Open the first file for reading
    file1 = fopen("file1.txt", "r");
    if (file1 == NULL) {
        printf("Error opening file1.txt\n");
        exit(1);
    }

    // Open the second file for reading
    file2 = fopen("file2.txt", "r");
    if (file2 == NULL) {
        printf("Error opening file2.txt\n");
        exit(1);
    }

    // Open the merged file for writing
    merged_file = fopen("merged_file.txt", "w");
    if (merged_file == NULL) {
        printf("Error creating merged_file.txt\n");
        exit(1);
    }

    // Read and write the contents of the first file to the merged file
    while ((ch = fgetc(file1)) != EOF) {
        fputc(ch, merged_file);
    }

    // Read and write the contents of the second file to the merged file
    while ((ch = fgetc(file2)) != EOF) {
        fputc(ch, merged_file);
    }

    printf("Merged file created successfully.\n");

    // Close the files
    fclose(file1);
    fclose(file2);
    fclose(merged_file);

    return 0;
}
