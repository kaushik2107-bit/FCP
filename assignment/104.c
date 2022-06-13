#include <stdio.h>

int main() {
	int n, i, sum  =0;
	printf("Enter a number: ");
	scanf("%d", &n);
	int p = n;
	while(p) {
		int tmp;
		tmp = p%10;
		p = p/10;
		sum += tmp*tmp*tmp;
	}
//	printf("%d", sum);
//	printf("%d", n);
	if (sum == n) printf("Yes, it is an Angstrom number.");
	else printf("No, it is not an Angstrom number.");
}
