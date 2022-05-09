#include <stdio.h>

int main() {
	char a;
	printf("Enter a character:\n");
	scanf("%c", &a);
	//int arr[52] = {a, b, c, d, e, f, g, h, i, j, k , l, m, n, o, p, q, r, s, t, u, v, w, x, y, z, A, B,C, D, E, F, G, H,I, J, K, L, M, N, O, P, Q,R,S,T,U,V,W,X,Y,Z}
	
	if((a>64 && a<91) || (a>96 && a<123)) {
		printf("The character is an alphabet.");
	} else {
		printf("the character is not an alphabet.");
	}
	return 0;
}
