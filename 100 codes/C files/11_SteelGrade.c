#include <stdio.h>

int main()
{
    float hardness, tensileStrength, Carbon;
    int conditionsMet = 0;
    printf("Enter hardness\n");
    scanf("%f", &hardness);
    printf("Enter tensile strength\n");
    scanf("%f", &tensileStrength);
    printf("Enter Carbon Content\n");
    scanf("%f", &Carbon);

    if (hardness > 50)
        conditionsMet++;
    if (Carbon < 0.7)
        conditionsMet++;
    if (tensileStrength > 500)
        conditionsMet++;

    if (conditionsMet == 3)
    {
        printf("Grade 10");
    }
    else if (conditionsMet == 2)
    {
        if (hardness > 50 && Carbon < 0.7)
            printf("Grade 9");
        else if (Carbon < 0.7 && tensileStrength > 500)
            printf("Grade 8");
        else
            printf("Grade 7");
    }
    else if (conditionsMet == 1)
    {
        printf("Grade 6");
    }
    else
    {
        printf("Grade 5");
    }

    return 0;
}