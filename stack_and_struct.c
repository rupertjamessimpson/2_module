#include <stdio.h>
#include <stdlib.h>

typedef struct student{
    int id;
    int age;
}student_t;

void printStudent(student_t* aStudent){
    printf("Student ID: %d, Age: %d\n", aStudent->id, aStudent->age);
}

void updateStudent(student_t* aStudent, int age, int id){
    aStudent->age = age;
    aStudent->id = id;
}

student_t* makeStudent(int age, int id){
    student_t* p_aStudent = (student_t*)malloc(sizeof(student_t));
    p_aStudent->age = age;
    p_aStudent->id = id;
    return p_aStudent;
}

int main(){
    student_t* s1 = makeStudent(23, 1001);
    student_t* s2 = makeStudent(24, 1002);

    printStudent(s1);
    printStudent(s2);

    updateStudent(s2, s2->age, 1003);

    printStudent(s2);

    free(s1);
    free(s2);
    return 0;
}