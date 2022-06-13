#include <stdio.h>

int factorial(int n) {
	if (n==0) return 1;
	else return n*factorial(n-1);
}

int power(float x, float n) {
	if (n==0) return 1;
	else return x*pow(x, n-1);
}

int main() {
	int n, i, x;
	float sum = 0;
	printf("Enter a number n: ");
	scanf("%d", &n);
	
	printf("Enter a number x: ");
	scanf("%d", &x);
	
	for (i=0; i<n; ++i) {
		sum += (float)power(-x, 2*i+1)/(float)factorial(2*i+1);
	}
	printf("The sum of the series is %f", sum);
	
}
