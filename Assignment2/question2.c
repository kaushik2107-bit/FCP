#include <stdio.h>

int main() {
	int a;
	char c;
	int b;
	printf("Enter what to calculate in (a operator b) form\n");
	scanf("%d%c%d", &a, &c, &b);
	switch(c) {
		case '+':
			printf("%d", (a+b));
			break;
		case '-':
			printf("%d", (a-b));
			break;
		case '*':
			printf("%d", (a*b));
			break;
		case 'x':
			printf("%d", (a*b));
			break;
		case '/':
			printf("%d", (a/b));
			break;
				 
	}
	return 0;
}
