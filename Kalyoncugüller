#include <stdio.h>
#include <stdlib.h>

union information {
    int age;
    float grade_av;
    char name[20];
};

int main() {
    union information personal;
    printf("Enter your age: ");
    scanf("%d", &personal.age);
    printf("Age: %d \n", personal.age);
    printf("Enter your grade avarage: ");
    scanf("%f", &personal.grade_av);
    printf("Grade avarage: %f \n", personal.grade_av);
    printf("Enter your name: ");
    scanf("%s", personal.name);
    printf("Name: %s \n", personal.name);
    return 0;
}
