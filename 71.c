#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Person {
    char name[50];
    int age;
    char address[100];
};

struct Person createPerson() {
    struct Person newPerson;
    printf("Enter the person's name: ");
    scanf("%s", newPerson.name);
    printf("Enter the person's age: ");
    scanf("%d", &newPerson.age);
    printf("Enter the person's address: ");
    scanf("%s", newPerson.address);
    return newPerson;
}

void printPerson(struct Person person) {
    printf("Name: %s\n", person.name);
    printf("Age: %d\n", person.age);
    printf("Address: %s\n", person.address);
}

int main() {
    struct Person person = createPerson();
    printPerson(person);
    return 0;
}
