#include <stdio.h>

struct student {
  int regNo;
  int marks;
  char grade;
};

int main() {
  struct student s[5];
  int i;

  printf("Enter details of 5 students\n");

  for (i = 0; i < 5; i++) {
    printf("Enter register number of student %d: ", i+1);
    scanf("%d", &s[i].regNo);

    printf("Enter marks of student %d: ", i+1);
    scanf("%d", &s[i].marks);

    
    if (s[i].marks >= 90 && s[i].marks <= 100) {
      s[i].grade = 'A';
    } else if (s[i].marks >= 78 && s[i].marks <= 89) {
      s[i].grade = 'B';
    } else if (s[i].marks >= 65 && s[i].marks <= 77) {
      s[i].grade = 'C';
    } else if (s[i].marks >= 50 && s[i].marks <= 64) {
      s[i].grade = 'D';
    } else {
      s[i].grade = 'F'; 
    }
  }

  printf("student details:\n");

 
  for (i = 0; i < 5; i++) {
    printf("register number: %d\n", s[i].regNo);
    printf("grade: %c\n", s[i].grade);
  }

  return 0;
}
