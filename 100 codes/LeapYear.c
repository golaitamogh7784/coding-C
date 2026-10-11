#include <stdio.h>

int main() {
    int year;

    printf("Enter the year:\n");
    scanf("%d", &year);

    printf("%d is %sa leap year.\n",
           year,
           ((year % 400 == 0) || ((year % 4 == 0) && (year % 100 != 0)))
               ? ""
               : "not ");

    return 0;
}