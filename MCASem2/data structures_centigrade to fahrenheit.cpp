#include<stdio.h>
int main()
{
	float celsius,fahrenheit;
	printf("\n Enter the temperature in celsius: ");
	scanf("%f", &celsius);
	fahrenheit=(1.8*celsius)+32;
	printf("%2fc is equal to %2f",celsius,fahrenheit);
	return 0;
}
