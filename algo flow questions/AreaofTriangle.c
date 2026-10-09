#include <stdio.h>

int main()
{
    int base, height;
float area;
    printf("Enter the base of the triangle: ");
    scanf("%d", &base);
    printf("Enter the height of the triangle: ");
    scanf("%d", &height);

    area = 0.5 * base * height;

  printf("Area of the triangle: %.2f\n", area);

    return 0;
}