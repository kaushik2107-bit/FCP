#include <stdio.h>
int main() {
	float inches;
	printf("Enter the distance in inches\n");
	scanf("%f", &inches);
	
	float out;
	out = inches * 2.54;
	printf("%f", out);
	return 0;
}
