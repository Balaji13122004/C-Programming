#include <stdio.h>

void swap(int *x, int *y) {
   int temp;
   temp = *x;
   *x = *y;
   *y = temp;
}

int main() {
   int a, b, c;

   printf("Input the value of 1st element : ");
   scanf("%d", &a);
   printf("Input the value of 2nd element : ");
   scanf("%d", &b);
   printf("Input the value of 3rd element : ");
   scanf("%d", &c);

   printf("The values before swapping are:\n");
   printf("element 1 = %d\n", a);
   printf("element 2 = %d\n", b);
   printf("element 3 = %d\n", c);

   // call the swap function with the addresses of a, b, and c
   swap(&a, &c);
   swap(&a, &b);

   printf("The values after swapping are:\n");
   printf("element 1 = %d\n", a);
   printf("element 2 = %d\n", b);
   printf("element 3 = %d\n", c);

   return 0;
}
