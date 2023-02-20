#include <stdio.h>

int main() {
   FILE *file_pointer;
   char file_name[100];
   char ch;

   printf("Enter the name of the file to display its contents: ");
   scanf("%s", file_name);

   // Open the file for reading
   file_pointer = fopen(file_name, "r");

   if (file_pointer == NULL) {
      printf("Unable to open file.\n");
      return 1;
   }

   // Read the contents of the file character by character
   ch = fgetc(file_pointer);

   while (ch != EOF) {
      printf("%c", ch);
      ch = fgetc(file_pointer);
   }

   // Close the file
   fclose(file_pointer);

   return 0;
}
