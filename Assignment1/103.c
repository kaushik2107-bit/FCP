#include <stdio.h>

int main() {
	float principal;
	float time;
	float interest;
	
	printf("Enter a principal value:\n");
	scanf("%f", &principal);
	
	printf("Enter the time:\n");
	scanf("%f", &time);
	
	printf("Enter a interest value:\n");
	scanf("%f", &interest);
	
	float SI = principal * time * interest;
	printf("%f\n", SI);
	
	
	float final_amount;
	printf("%f", principal + final_amount);
	return 0;
}
