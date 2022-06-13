#include <stdio.h>

int main() {
	int size, i, j, sum=0; 
	scanf("%d", &size);
	
	int arr1[size];
	int arr2[size];
	int arr3[size];
	
	for (i=0; i<size; ++i) {
		scanf("%d", &arr1[i]);
	}
	for (i=0; i<size; ++i) {
		scanf("%d", &arr2[i]);
	}
	
	for (i=0; i<size; ++i) {
		arr3[i] = arr1[i]*arr2[i];
		sum += arr3[i];
	}
	printf("%f", (float)sum/size);
	
}
