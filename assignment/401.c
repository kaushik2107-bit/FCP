#include <stdio.h>

int main() {
	int n, i, j, sum=0;
	scanf("%d", &n);
	
	while(n) {
		int tmp = n%10;
		n = n/10;
		sum += tmp*tmp;
	}
	
	printf("%d", sum);
}
