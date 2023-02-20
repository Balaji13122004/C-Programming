#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
    if (argc != 3) {
        printf("Usage: %s <filename> <n>\n", argv[0]);
        return 1;
    }

    char *filename = argv[1];
    int n = atoi(argv[2]);

    FILE *fp = fopen(filename, "r+");
    if (fp == NULL) {
        printf("Unable to open file: %s\n", filename);
        return 1;
    }

    char buffer[n];
    if (fgets(buffer, n+1, fp) == NULL) {
        printf("Unable to read from file: %s\n", filename);
        return 1;
    }

    int len = strlen(buffer);
    for (int i = 0; i < len / 2; i++) {
        char temp = buffer[i];
        buffer[i] = buffer[len-i-1];
        buffer[len-i-1] = temp;
    }

    fseek(fp, 0, SEEK_SET);
    fputs(buffer, fp);

    fclose(fp);

    return 0;
}
