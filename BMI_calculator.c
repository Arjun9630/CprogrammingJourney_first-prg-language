//BMI Calc

#include <stdio.h>
float Metric_system();
float Imperial_system();
void BMI_Statement(float BMI);

int main(){
    printf("\n\n\n---------------------------------------------------------------------");
    printf(" BMI CALCULATOR ");
    printf("---------------------------------------------------------------------");
    
    float BMI;
    int choice_sys;
    printf("\n\nBMI SCALES = \n\n");
    printf("1. Metric system (Meters) & (Kgs)\n");
    printf("2. Imperial system (Inches) & (pounds)\n\n");
    printf("----------------------------------------------------------------------------------------------------------------------------------------------------------\n");

    printf("\nEnter the choice of scales (1 or 2) = ");
    scanf("%d", &choice_sys);

    switch (choice_sys)
    {
    case 1 :
        BMI = Metric_system();
        printf("\nBMI = %.2f\n", BMI);
        BMI_Statement(BMI);
        break;
    case 2 :
        BMI = Imperial_system();
        printf("\nBMI = %.2f\n", BMI);
        BMI_Statement(BMI);
        break;
    
    default:
        printf("\n\n\n\n----------------------------------------------------------------------------------------------------------------------------------------------------------\n");
        printf("\nInvalid choice of scale!!");
        printf("\n\n----------------------------------------------------------------------------------------------------------------------------------------------------------\n");
        break;
    }

    return 0;
}

float Metric_system(){
    float height_meters, weight_kg, BMI_metric;
    
    printf("\nEnter Height in meters = ");
    scanf("%f", &height_meters);
    printf("\nEnter Weight in kgs = ");
    scanf("%f", &weight_kg);
    printf("\n\n\n\n----------------------------------------------------------------------------------------------------------------------------------------------------------\n");
    float height_meters_sqr = height_meters * height_meters;
    BMI_metric = weight_kg / height_meters_sqr;
    return BMI_metric;
}

float Imperial_system(){
    float height_inches, weight_pounds, BMI_imperial;
    printf("\nEnter Height in inches = ");
    scanf("%f", &height_inches);
    printf("\nEnter Weight in pounds = ");
    scanf("%f", &weight_pounds);
    printf("\n\n\n\n----------------------------------------------------------------------------------------------------------------------------------------------------------\n");
    float height_inches_sqr = height_inches * height_inches;
    BMI_imperial = 703 * (weight_pounds / height_inches_sqr);
    return BMI_imperial;
}

void BMI_Statement(float BMI){
    if(BMI < 18.5){
        printf("Result Statement = Underweight.");
        printf("\n\n----------------------------------------------------------------------------------------------------------------------------------------------------------\n");

    }

    else if(BMI >= 18.5 && BMI < 25){
        printf("Result Statement = Healthy.");
        printf("\n\n----------------------------------------------------------------------------------------------------------------------------------------------------------\n");
    }

    else if(BMI >= 25 && BMI < 30){
        printf("Result Statement = Pre-obesity.");
        printf("\n\n----------------------------------------------------------------------------------------------------------------------------------------------------------\n");
    }
    else if(BMI >= 30 && BMI < 35){
        printf("Result Statement = Obesity class 1.");
        printf("\n\n----------------------------------------------------------------------------------------------------------------------------------------------------------\n");
    }

    else if(BMI >= 35 && BMI < 40){
        printf("Result Statement = Obesity class 2.");
        printf("\n\n----------------------------------------------------------------------------------------------------------------------------------------------------------\n");
    }

    else if(BMI > 40){
        printf("Result Statement = Obesity class 3.");
        printf("\n\n----------------------------------------------------------------------------------------------------------------------------------------------------------\n");
    }
}




