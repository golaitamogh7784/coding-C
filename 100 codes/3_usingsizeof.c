#include <stdio.h>

int main()
{
    int int1;
    float float1;
    double double1;
    char char1;

    printf("Enter int:\n");
    scanf("%d", &int1);
    printf("Enter float:\n");
    scanf("%f", &float1);
    printf("Enter double:\n");
    scanf("%lf", &double1);
    printf("Enter char:\n");
    scanf(" %c", &char1);

    printf("Size of int: %zu bytes\n", sizeof(int1));
    printf("Size of float: %zu bytes\n", sizeof(float1));
    printf("Size of double: %zu bytes\n", sizeof(double1));
    printf("Size of char: %zu bytes\n", sizeof(char1));

    return 0;
}