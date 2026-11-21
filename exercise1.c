#include <stdio.h>
#include <string.h>

struct student {
    int ID;
    char name[20];
    double grade;
};

int main(void) {
    struct student s1 = {2612943, "이다연", 4.3};

    printf("ID : %d\n", s1.ID);
    printf("name : %s\n", s1.name);
    printf("grade : %.1f\n", s1.grade);

    return 0;
}