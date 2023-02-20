#include <stdio.h>

int isComposite(int num) {
    int i;
    if(num < 2) {
        return 0;
    }
    for(i=2; i<=num/2; i++) {
        if(num%i == 0) {
            return 1;
        }
    }
    return 0;
}

int countComposite(int arr[], int size) {
    int count = 0;
    int i;
    for(i=0; i<size; i++) {
        if(isComposite(arr[i])) {
            count++;
        }
    }
    return count;
}

int main() {
    int size, i, arr[100];
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    printf("Enter the elements of the array: ");
    for(i=0; i<size; i++) {
        scanf("%d", &arr[i]);
    }
    int compositeCount = countComposite(arr, size);
    printf("The number of composite numbers in the array is: %d", compositeCount);
    return 0;
}
