#include <stdio.h>
int main() {
	int x, y, i, j, sum =0;
	scanf("%d %d", &x, &y);
	
	while(x && y) {
		int tmp1, tmp2;
		tmp1 = x%10;
		x = x/10;
		
		tmp2 = y%10; 
		y = y/10;
		
		sum += tmp1*tmp2;
	}
	
	printf("%d", sum);
}
