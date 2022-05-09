#include <stdio.h>

int main() {
	int a;
	printf("Enter an integer:\n");
	scanf("%d", &a);
	printf("%d\n", a);
	
	float b;
	printf("Enter a floating value:\n");
	scanf("%f", &b);
	printf("%f\n", b);
	
	float c;
	printf("Enter a floating value:\n");
	scanf("%f", &c);
	printf("%.2f\n", c);
	
	float d;
	printf("Enter a floating value:\n");
	scanf("%f", &d);
	printf("%.2f\n", d);
	
	float e;
	printf("Enter a floating value:\n");
	scanf("%f", &e);
	printf("%f\n", e*e);
	
	char fname[200];
	char lname[200];
	printf("Enter your name:\n");
	scanf("%s %s", &fname, &lname);
	printf("%s %s\n fname, lname);
	
	char college[200];
	scanf("%s", &college);
	printf("%s", college);
}
