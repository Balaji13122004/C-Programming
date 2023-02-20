#include <stdio.h>

int main()
{
    int array[100], n, i;
    int max1, max2;

    printf("Enter the number of elements you want to enter: ");
    scanf("%d", &n);

    printf("Enter the elements of the array:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &array[i]);
    }

    // Find the maximum element
    max1 = array[0];
    for(i = 1; i < n; i++)
    {
        if(array[i] > max1)
        {
            max1 = array[i];
        }
    }

    // Find the second maximum element
    max2 = array[0];
    for(i = 1; i < n; i++)
    {
        if(array[i] > max2 && array[i] < max1)
        {
            max2 = array[i];
        }
    }

    printf("The largest two elements in the array are: %d and %d\n", max1, max2);

    return 0;
}
