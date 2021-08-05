#include <stdlib.h>
#include<stdio.h>

double calculateBMI(double weight, double height);

int main()
{
printf("Calculate your BMI\n"); 

double w, h, BMI;
printf("Enter your weight in kilograms:\n", w); 
scanf("%lf", &w);
printf("Enter your height in metres:\n", h);
scanf("%lf", &h);
BMI = calculateBMI(w,h);
printf("Your BMI is %lf\n", BMI);

printf("BMI categories:\n");
if (BMI<=18.5)
{
    printf("Your BMI is %lf and you are currently underweight.\n",BMI);
}
else if (BMI>=18.6 && BMI<=25)
{
    printf("Your BMI is %lf and you are normal weight.\n",BMI);
}
else if (BMI>=25.1 && BMI<=29.9)
{
    printf("Your BMI is %lf and you are currently overweight.\n",BMI);
}
else
{
    printf("Your BMI is %lf and you are obese.\n",BMI);
}


return 0;
}

double calculateBMI(double weight, double height)
{
    double result;
    result = weight / (height*height);
    return result;
}

