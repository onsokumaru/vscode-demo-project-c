#include <stdio.h>
#include "functions.h"
#include "my_math.h"



int main(int, char**){
    
    int a, b;
    float c, d;
    a = 100; b = 200;
    c = 100.0; d = 200.0;
    print_name("Mike");
    print_age(46);
    printf("The sum of %d and %d is: %d\n", a, b, iadd(a, b));
    printf("The sum of %.2f and %.2f is: %.2f\n", c, d, fadd(c, d));
    return 0;
}
