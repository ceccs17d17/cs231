       /*
	26.QUEUE USING ARRAY
	NAME :BAMISHA A
	ROLL No. :17
	*/

#include <stdio.h>

int queue[100], n=100, front=-1, rear=-1;

void enqueue() {
	int data;
	if (rear == n-1) 
		{
		printf("Queue full\n");
		}
	 else 
		{
		printf("Enter the data: ");
		scanf("%d", &data);
		if (front == -1)
			{
			front = rear = 0;
			} 
		else {
			rear++;
		     }
		queue[rear] = data;
		}
}
void dequeue() {
	if (front == -1) 
	{
		printf("Failed: Empty queue\n");
	}
	 else 
	{
		printf("Deleted element : %d\n", queue[front]);
		if (front == rear) 
				{
			front = rear = -1;
				} 
		else 
			{
				front++;
			}
	}
}
void printQueue() {
	int i=0;
	if (front == -1) 
		{
		printf("Empty Queue\n");
		} 
	else
	{
	for (i=front; i<=rear; i++) 
	{
	printf("%d\n", queue[i]);
	}
	}
}
int main() {
	char choice;
	front = rear = -1;
	do {
		printf("\n\tQueue using array\n1.Enqueu\n2.Dequeue\n3.Display\n4.Exit\nEnter your choice : ");
		scanf(" %c", &choice);
		switch(choice) {
			case '1':
				enqueue();
				break;
			case '2':
				dequeue();
				break;
			case '3':
				printQueue();
				break;
		}
	} while(choice != '4');
}
OUTPUT:

	choose
	1.Insertion
	2.Deletion
	3.Display
	1
	Enter the value of element: 3

	choose
	1.Insertion
	2.Deletion
	3.Display
	1
	Enter the value of element: 2

	choose
	1.Insertion
	2.Deletion
	3.Display
	3
	3 -> 2 -> 
	Front: 1
	End: 2
	choose
	1.Insertion
	2.Deletion
	3.Display
	2
	Deleted 3
	choose
	1.Insertion
	2.Deletion
	3.Display
	3
	2 -> 
	Front: 2
	End: 2
	choose
	1.Insertion
	2.Deletion
	3.Display
