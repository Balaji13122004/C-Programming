#include <stdio.h>
#include <string.h>

#define MAX_NAMES 100
#define MAX_NAME_LENGTH 50

void sortNames(char names[][MAX_NAME_LENGTH], int numNames, int order);

int main() {
    char names[MAX_NAMES][MAX_NAME_LENGTH];
    int numNames;
    char order;
    int i;

    printf("Enter the number of names: ");
    scanf("%d", &numNames);

    printf("Enter the names:\n");
    for (i = 0; i < numNames; i++) {
        scanf("%s", names[i]);
    }

    printf("Enter the order (A/D): ");
    scanf(" %c", &order);

    sortNames(names, numNames, (order == 'A' || order == 'a') ? 1 : -1);

    printf("Sorted names:\n");
    for (i = 0; i < numNames; i++) {
        printf("%s\n", names[i]);
    }

    return 0;
}

void sortNames(char names[][MAX_NAME_LENGTH], int numNames, int order) {
    int i, j;
    char temp[MAX_NAME_LENGTH];

    for (i = 0; i < numNames - 1; i++) {
        for (j = i + 1; j < numNames; j++) {
            if (strcmp(names[i], names[j]) * order > 0) {
                strcpy(temp, names[i]);
                strcpy(names[i], names[j]);
                strcpy(names[j], temp);
            }
        }
    }
}
