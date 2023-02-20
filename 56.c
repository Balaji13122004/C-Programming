#include <stdio.h>
#include <string.h>

void sortString(char *str) {
    int n = strlen(str);
    char temp;

    for(int i=0; i<n-1; i++) {
        for(int j=i+1; j<n; j++) {
            if(str[i] > str[j]) {
                temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }
}

int areAnagrams(char *str1, char *str2) {
    int n1 = strlen(str1);
    int n2 = strlen(str2);

    if(n1 != n2) {
        return 0;
    }

    sortString(str1);
    sortString(str2);

    for(int i=0; i<n1; i++) {
        if(str1[i] != str2[i]) {
            return 0;
        }
    }

    return 1;
}

int main() {
    char str1[100], str2[100];

    printf("Enter the first string: ");
    scanf("%s", str1);

    printf("Enter the second string: ");
    scanf("%s", str2);

    if(areAnagrams(str1, str2)) {
        printf("The strings are anagrams.\n");
    }
    else {
        printf("The strings are not anagrams.\n");
    }

    return 0;
}
