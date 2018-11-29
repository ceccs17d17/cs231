/*
	18.STACK USING ARRAY
	NAME :BAMISHA A
	ROLL No. :17
	*/

#include<stdio.h>
int stack[100],choice,n=100,top,x,i;
void push()
	{
		if(top>=n-1)
			printf("stack is over flow");
		else
		{
			printf("enter the value to be pushed\n");
			scanf("%d",&x);
			top++;
			stack[top]=x;
		}
	}
void pop()
	{
		if(top<=-1)
			printf("stack is under fiow");
		else{
			printf("\nthe popped element is %d",stack[top]);
			top--;
			}
	}
void display()
	{
		if(top>=0)
		{
			printf("\nelement in the stack");
			for(i=top;i>=0;i--)
				printf("%d",stack[i]);
		}
		else 
			printf("the stack is empty");
}
void main()
	{
		top=-1;
 	do{
		printf("\n 1.push\n 2.pop\n 3.display\n 4.exist");
		printf("enter the choice");

		scanf("%d",&choice);
		switch(choice)
			{
				case 1:
				{
					push();
					break;
				}
				case 2:
				{
					pop();
					break;
				}
				case 3:
				{
					display();
					break;
				}
				case 4:

				{
					printf("exit");
					break;
				}
			}
		}
	while(choice!=4);
	
	}

        OUTPUT:
	Enter the size of stack:4

	1.PUSH
	2.POP
	3.DISPLAY
	4.EXIT
	 Enter the Choice:1
	Enter a value to be pushed:2

	 Enter the Choice:1
	Enter a value to be pushed:3

	 Enter the Choice:3

	The elements in stack 

	3
	2
	Enter Choice
	 Enter the Choice:2

	The popped element is 3
	 Enter the Choice:3

	The elements in stack 

	2
