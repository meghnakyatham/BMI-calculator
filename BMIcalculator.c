#include <stdio.h>

float calculateBMI(float weight, float height)
{
    // BMI formula: BMI = weight (kg) / (height (m) * height (m))
    float bmi = weight / (height * height);
    return bmi;
}

int main()
{
    float weight, height;
    
    printf("Enter your weight in kilograms: ");
    scanf("%f", &weight);
    
    printf("Enter your height in meters: ");
    scanf("%f", &height);
    
    if (weight <= 0 || height <= 0)
    {
        printf("Invalid input. Weight and height must be positive values.\n");
        return 1;
    }
    
    float bmi = calculateBMI(weight, height);
    
    printf("Your BMI is: %.2f\n", bmi);
    
    if (bmi < 18.5)
    {
        printf("You are underweight.\n");
    }
    else if (bmi >= 18.5 && bmi < 25)
    {
        printf("You are in the normal weight range.\n");
    }
    else if (bmi >= 25 && bmi < 30)
    {
        printf("You are overweight.\n");
    }
    else
    {
        printf("You are obese.\n");
    }
    
    return 0;
}
