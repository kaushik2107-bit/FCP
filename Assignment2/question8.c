#include <stdio.h>

int main() {
	int a;
	printf("Enter a number\n");
	scanf("%d", &a);
	
	if(a>0) {
		printf("Positive Number\n");
	} else if (a<0) {
		printf("Negative Number\n");
	} else {
		printf("Zero\n");
	}
	return 0;
}
