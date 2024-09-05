#include<stdio.h>
#include<stdlib.h>
#define MAX_SIZE 10
int front=-1,rear=-1;
int circularQueue[MAX_SIZE];
int isFull()
{
	return (rear+1)%MAX_SIZE==front;
}
int isEmpty()
{
	return front=-1 && rear==-1;
}
void enqueue(int value)
{
	if(isFull())
	{
		printf("Queue is full.cannot insert.\n");
		return;
	}
	if(isEmpty())
	{
		front=rear=0;
	}
	else
	{
		rear=(rear+1)%MAX_SIZE;
	}
	circularQueue[rear]=value;
	printf("Inserted %d into the queue.\n",value);
}
void dequeue()
{
	if(isEmpty())
	{
		printf("Queue is empty.cannot delete.\n");
		return;
	}
	int removedvalue=circularQueue[front];
	if(front==rear)
	{
		front=rear=-1;
	}
	else
	{
		front=(front+1)%MAX_SIZE;
	}
	printf("Deleted %d from the queue.\n",removedvalue);
}
int frontvalue()
{
	if(isEmpty())
	{
		printf("Queue is empty.No front element.\n");
		return -1;
	}
	return circularQueue[front];
}
void displayQueue()
{
	if(isEmpty())
	{
		printf("Queue is empty.Nothing to display.\n");
		return;
	}
	int i=front;
	printf("Circular Queue: ");
	do
	{
		printf("%d",circularQueue[i]);
		i=(i+1)%MAX_SIZE;
	}
	while(i!=(rear+1)%MAX_SIZE);
	printf("\n");
}
int main()
{
	int choice,value;
	while(1)
	{
		printf("\n Circular Queue operations menu:\n");
		printf("1.Insert an element\n");
		printf("2.Delete an element\n");
		printf("3.Front element\n");
		printf("4.Display queue\n");
		printf("5.Quit\n");
		printf("Enter your choice: ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				printf("Enter value to insert: ");
				scanf("%d",&value);
				enqueue(value);
				break;
			case 2:
			dequeue();
			break;
			case 3:
			printf("Front element:%d\n",frontvalue());
			break;
			case 4:
				display Queue();
				break;
			case 5:
			printf("Exiting program.\n");
			exit(0);
			default:
			printf("Invalid choice.Please try again.\n");
		}
	}
}
