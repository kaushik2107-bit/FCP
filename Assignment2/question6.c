#include <stdio.h>
int main() {
	float a;
	printf("Enter a number:\n");
	scanf("%f", &a);

	int b = a/1;	
	int c = b%10;
	printf("%d", c);		
	return 0;
}
