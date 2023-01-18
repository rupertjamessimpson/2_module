#include <stdio.h>
#include "add5.h"

int test_one(){

    int result = add5(5);

    if(result != 10){
        return 1;
    }

    return 0;
}

int test_pass_by_value(){

    int x = 5;

    int result = add5(&x);

    if(x != 5){
        return 1;
    }

    return 0;
}

int test_pass_by_reference(){

    int x = 5;

    int x_p = &x;

    int result = add5(&x);

    if(x != 10){
        return 1;
    }

    return 0;
}

int main(){
    int errors = 0;

    errors += test_one();
    errors += test_pass_by_value();
    errors += test_pass_by_reference();

    printf("errors = %d", errors)

    return 0;
}