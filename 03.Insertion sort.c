        /*
	3.INSERTION SORT
	NAME :ASHISH MATHEW JOHN
	ROLL No. :13
	*/


#include <stdio.h>

int insertionSort(int array[], int size) {
	int i, j, temp;
	for (i=1; i<size; i++) {
		temp = array[i];
		for (j=i-1; j>=0 && array[j] > temp; j--) {
				array[j+1] = array[j];
		}
		array[j+1] = temp;
	}
}
void main() {
	int array[100], i, j, size;

	printf("Enter size of the array : ");
	scanf("%d", &size);

	printf("Enter array\n");
	for (i=0; i<size; i++) {
		scanf("%d", &array[i]);
	}

	insertionSort(array, size);
	
	printf("Sorted array\n");
	for (i=0; i<size; i++) {
		printf("%d\n", array[i]);
	}
}

        OUTPUT:
	Enter the size:4
	Enter the elements1
	3
	2
	7
	After Sorting 
	1237
