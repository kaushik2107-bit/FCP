#include <stdio.h>

int main() {
	int x, y, i, j, count = 0;
	printf("Enter two positive numbers: ");
	scanf("%d %d", &x, &y);
	
	
	int min, max;
	if (x >= y) {
		max = x;
		min = y;
	} else {
		max = y;
		min = x;
	}
	printf("The even numbers are: ");
	for (i =min+1; i<max; ++i) {
		if (i%2 == 0) {
			printf("%d ", i);
			count++;
		}
	}
	printf("\n");
	printf("The total numbers are: %d", count);
	
	
}
