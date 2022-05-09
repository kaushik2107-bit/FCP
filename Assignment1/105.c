#include <stdio.h>

int main() {
	float a, b, c;
	
	printf("Enter the value of a, b and c:\n");
	scanf("%f", &a);
	scanf("%f", &b);
	scanf("%f", &c);
	
	float eqn1 = a*a + 2*a*b + b*b;
	float eqn2 = a*a - 2*a*b + b*b;
	float eqn3 = a*a*a + b*b*b + c*c*c - 3*a*b*c;

	printf("a*a + 2*a*b + b*b = %f\n", eqn1);
	printf("a*a - 2*a*b + b*b = %f\n", eqn2);
	printf("a*a*a + b*b*b + c*c*c - 3*a*b*c = %f\n", eqn3);
	
}
