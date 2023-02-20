#include <stdio.h>

int stringLength(char *str) {
    int length = 0;
    while (*str != '\0') {
        length++;
        str++;
    }
    return length;
}

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, 100, stdin);
    int length = stringLength(str);
    printf("The length of the string is: %d", length);
    return 0;
}
