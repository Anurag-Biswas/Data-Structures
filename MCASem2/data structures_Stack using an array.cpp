#include<stdio.h>
#include<stdlib.h>
#define MAX_SIZE 100
int stack[MAX_SIZE];
int top=-1;
void push(int a)
{
	if(top>=MAX_SIZE-1)
	{
		printf("Stack Overflow");
		return;
	}
	stack[++top]=a;
	printf("Element %d pushed into the stack",a);
}
void pop()
{
	if(top==-1)
	{
		printf("Stack is empty");
		return;
	}
	printf("Popped element:%d",stack[top--]);
}
int peek()
{
	if(top==-1)
	{
		printf("Stack is empty");
		return;
	}
	printf("Stack elements:");
	for(int i=0;i<=top;i++)
	{
		printf("%d",&stack[i]);
	}
	printf("\n");
}
int main()
{
	int ch,a;
	while(1)
	{
		printf("1.Push");
		printf("2.Pop");
		printf("3.Peek");
		printf("4.Display");
		printf("5.Exit");
		printf("Enter your choice: ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				printf("Enter value to push: ");
				scanf("%d",&a);
				push(value);
				break;
			case 2:
			pop();
			break;
			case 3:
			a=peek();
			if(a!=1)
			{
				printf("Top element %d\n",a);
			}
			return;
			case 4:
				display();
				break;
			case 5:
			exit(0);
			default:
			printf("Wrong choice");	
		}
	}
	return 0;
}
