#include <stdio.h>

int main() {
	int n, i, j;
	scanf("%d", &n);
	
	for (i=1; i<=n; ++i) {
		for (j=1; j<=2*n; ++j) {
			if(i>=j) printf("%d",j);
			else if (2*n-j+1+i == n) printf("%d", n-j);
			else printf(" ");
		}
		printf("\n");
	}
}
