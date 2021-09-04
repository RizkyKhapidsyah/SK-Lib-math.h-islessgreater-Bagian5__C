#include <stdio.h>
#include <math.h>
#include <conio.h>

/*
    Source by CPPReference
    Modified For Learn by RK
    I.D.E : VS2019
*/

int main(void) {
    printf("islessgreater(2.0,1.0)      = %d\n", islessgreater(2.0, 1.0));
    printf("islessgreater(1.0,2.0)      = %d\n", islessgreater(1.0, 2.0));
    printf("islessgreater(1.0,1.0)      = %d\n", islessgreater(1.0, 1.0));
    printf("islessgreater(INFINITY,1.0) = %d\n", islessgreater(INFINITY, 1.0));
    printf("islessgreater(1.0,NAN)      = %d\n", islessgreater(1.0, NAN));

    _getch();
    return 0;
}