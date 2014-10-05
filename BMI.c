#include <stdio.h>

//Program that calculates a persons BMI

float calBMI(float, float);

main()
{
	float weightKg, heightMetres, bmi;

	printf("Please enter your weight in kilograms (KG): ");
	scanf_s("%f", &weightKg); fflush(stdin);

	printf("\nPlease enter your height in metres: ");
	scanf_s("%f", &heightMetres); fflush(stdin);

	bmi = calBMI(weightKg, heightMetres);

	printf("\nYour BMI is %.1f", bmi);

	printf("\n\n\n");
	system("pause");
} // main()

float calBMI(float w, float h)
{
	float result;
	//BMI = weight in KG
	//divided by height in metres squared

	result = w / (h*h);

	return(result);
} // calBMI()