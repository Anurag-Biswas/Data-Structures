#include<stdio.h>
#include<stdlib.h>
#define MAX_SIZE 100
int queue[MAX_SIZE];
int front=-1;
int rear=-1;
int isEmpty()
{
	return (front==-1 && rear==-1);
}
int isFull()
{
	return rear==MAX_SIZE-1;
}
void enqueue(int value)
{
	if(isFull())
	{
		printf("Queue is full.cannot enqueue.\n");
		return;
	}
	elseif(isEmpty())
	{
		front=rear=0;
	}
	else
	{
		rear++;
	}
	queue[rear]=value;
	printf("%d enqueued successfully.\n",value);
}
void dequeue()
{
	if(isEmpty())
	{
		printf("Queue is empty.cannot dequeue.\n");
		return;
	}
	else if(front==rear)
	{
		printf("%d dequeued successfully.\n",queue[front]);
		front=rear=-1;
	}
	else
	{
		printf("%d dequeued successfully.\n",queue[front]);
		front++;
	}
}
int peek()
{
	if(isEmpty())
	{
		printf("Queue is empty.cannot peek.\n");
		return -1;
	}
	return queue[front];
}
void display()
{
	if(isEmpty())
	{
		printf("Queue is empty.\n");
		return;
	}
	printf("Queue elements:");
	for(int i=front;i<=rear;i++)
	{
		printf("%d",queue[i]);
	}
	printf("\n");
}
int main()
{
	int choice,value;
	while(1)
	{
		printf("\n Queue Menu:\n");
		printf("1.Enqueue (Insert an element)\n");
		printf("2.Dequeue (Delete an element)\n");
		print("3.Peek (Front element)\n");
		printf("4.Display Queue\n");
		printf("5. Exit\n");
		printf("Enter your choice: ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				printf("Enter the element to enqueue :");
				scanf("%d",&value);
				enqueue(value);
				break;
			case 2:
			dequeue();
			break;
			case 3:
			value=peek();
			if(value!=-1)
			{
				printf("Front element:%d\n",value);
			}
			break;
			case 4:
				display();
				break;
			case 5:
			exit(0);
			default:
			printf("Invalid choice.Please try again\n");	
		}
	}
	return 0;
}

