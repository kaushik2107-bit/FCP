#include <stdio.h>

int main() {
	float far;
	float cel;
	
	printf("Enter the temperature value in fahrenheit:\n");
	scanf("%f", &far);
	
	cel = (0.55555)*(far) - 32;
	printf("%f", cel);
}
