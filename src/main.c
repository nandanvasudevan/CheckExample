#include <stdio.h>
#include "add.h"

int main(int argc, char *argv)
{
    int sum;
    int num1, num2;
    num1 = num2 = 20;

    sum = add(num1, num2);

    printf("Sum of %d and %d is %d\n", num1, num2, sum);
}