#include <stdio.h>

int factorial(int n) {
	if (n==0) return 1;
	else return n*factorial(n-1);
}

int main() {
	int n, i, sum  =0;
	printf("Enter a number: ");
	scanf("%d", &n);
	int p = n;
	while(p) {
		int tmp;
		tmp = p%10;
		p = p/10;
		sum += factorial(tmp);
	}
//	printf("%d", sum);
//	printf("%d", n);
	if (sum == n) printf("Yes, it is an Strong number.");
	else printf("No, it is not an Strong number.");
}
