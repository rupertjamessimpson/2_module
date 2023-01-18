#include <stdio.h>

int add5(int* num){
    *num += 5;
    return *num;
}