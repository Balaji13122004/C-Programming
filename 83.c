#include <stdio.h>
#include <stdlib.h>

#define MAX_LENGTH 1000

int main() {
    char input_file_name[50], output_file_name[50];
    char plaintext[MAX_LENGTH], ciphertext[MAX_LENGTH];
    char mapping[26] = {'d', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', 'a', 'b', 'c'};
    // this is a simple substitution cipher that shifts each letter in the alphabet by 3 places

    printf("Enter the name of the input file: ");
    scanf("%s", input_file_name);
    FILE *input_file = fopen(input_file_name, "r");
    if (input_file == NULL) {
        printf("Error: file not found\n");
        exit(1);
    }

    printf("Enter the name of the output file: ");
    scanf("%s", output_file_name);
    FILE *output_file = fopen(output_file_name, "w");

    while (fgets(plaintext, MAX_LENGTH, input_file) != NULL) {
        int i = 0;
        while (plaintext[i] != '\0') {
            if (plaintext[i] >= 'a' && plaintext[i] <= 'z') {
                ciphertext[i] = mapping[plaintext[i] - 'a'];
            } else {
                ciphertext[i] = plaintext[i];
            }
            i++;
        }
        fprintf(output_file, "%s", ciphertext);
    }

    fclose(input_file);
    fclose(output_file);

    printf("Encryption successful. Output written to %s.\n", output_file_name);
    return 0;
}
