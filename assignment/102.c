#include <stdio.h>

int main() {
	int size, i, j;
	
	scanf("%d", &size);
	int arr[size];
	
	for (i=0; i<size; ++i) {
		scanf("%d", &arr[i]);
	}
	
	for (i=0; i<size; ++i) {
		for (j=0; j<size-i-1; ++j) {
			int tmp;
			if (arr[j]>arr[j-1]) {
				tmp = arr[j];
				arr[j] = arr[j-1];
				arr[j-1] = arr[j];
			}
		}
	}
	for (i=0; i<size; ++i) {
		printf("%d", arr[i]);
	}
	
}
