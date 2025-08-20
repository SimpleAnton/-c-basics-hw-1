#include<stdio.h>

int main() {

	float c;
	float f;

	printf("Okay, please insert the amount of Celsius degrees: ");
	scanf("%f",&c);

	f=c*1.8 + 32;

	printf("Here's the degrees Fahrenheit: %f \n",f);

}
