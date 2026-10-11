#include <stdio.h>

int main() {
    float basicSalary, grossSalary, hra, da;
    printf("Enter the basic salary: ");
    scanf("%f", &basicSalary);

    if (basicSalary <= 0 || basicSalary > 30000) {
        printf("Enter a basic salary between 1 and 30000.\n");
        return 1;
    }

    if (basicSalary <= 10000) {
        hra = basicSalary * 0.20f;
        da = basicSalary * 0.80f;
    } else if (basicSalary <= 20000) {
        hra = basicSalary * 0.25f;
        da = basicSalary * 0.90f;
    } else {
        hra = basicSalary * 0.30f;
        da = basicSalary * 0.95f;
    }

    grossSalary = basicSalary + hra + da;

    printf("HRA: %.2f\n", hra);
    printf("DA: %.2f\n", da);
    printf("Gross salary: %.2f\n", grossSalary);

    return 0;
}