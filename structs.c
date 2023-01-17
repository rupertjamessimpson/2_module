#include <stdio.h>

struct student{
    int id;
    int age;
    double creditHours;
};

struct student makeStudent(int id, int age, double creditHours){
    struct student tempStudent;
    tempStudent.id = id;
    tempStudent.age = age;
    tempStudent.creditHours = creditHours;
    return tempStudent;
}

void printStudent(struct student aStudent){
    printf("Student: %d %d %f\n", aStudent.id,
                                  aStudent.age,
                                  aStudent.creditHours);
}

int main(){
    struct student s1 = makeStudent(1001, 23, 14.5);

    struct student s2;
    s2.id = 1002;
    s2.age = 24;
    s2.creditHours = 13;

    // printf("Student: %d %d %f\n", s1.id, s1.age, s1.creditHours);
    // printf("Student: %d %d %f\n", s2.id, s2.age, s2.creditHours);
    printStudent(s1);
    printStudent(s2);
    return 0;
}
