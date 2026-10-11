#include <stdio.h>

int main()
{
    float no1, no2, mul;
    printf("Enter two numbers\n");
    scanf("%f %f", &no1, &no2);
    mul = no1 * no2;
    printf("The multiplication of two numbers is: %.2f\n", mul);
    return 0;
}