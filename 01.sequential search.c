 /*
1.SEQUENTIAL SEARCH
NAME :BAMISHA A
ROLL No. :17
*/

#include <stdio.h>

int sequentialSearch(int array[], int size, int element)
{
	int i;

	for (i=0; i<size; i++)
	{
		if (array[i] == element)
		{
			return (i+1);
		}
	}
	return (0);
}
int main()
 {
	int i=0, found=0, array[100], size, element;

	printf("Enter number of elements : ");
	scanf("%d", &size);

	printf("Enter elements\n");
	for (i=0; i<size; i++) {
		scanf("%d", &array[i]);
	}

	printf("Enter element to search : ");
	scanf("%d", &element);

	found = sequentialSearch(array, size, element);

	if (found) 
	{
		printf("Element found at position %d\n", found);
	} 
	else 
	{
		printf("Element not found\n");
	}
}

    OUTPUT:
	Enter the size 5
	Enter elements
	3
	1
	8
	2
	5
	Enter number to be searched
	8
	8 is found in the list, at position 3
