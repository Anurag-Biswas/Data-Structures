#include<stdio.h>
#include<stdlib.h>
struct Node
{
	int data;
	struct Node*next;
};
struct Queue
{
	struct Node*front;
	struct Node*rear;
};
struct Node*createNode(int data)
{
	struct Node*newNode=(struct Node*)malloc(sizeof(struct Node));
	if(newNode==NULL)
	{
		printf("Memory allocation error\n");
		exit(1);
	}
	newNode->data=data;
	newNode->next=NULL;
	return newNode;
}
void initializeQueue(struct Queue*queue)
{
	return (queue->front==NULL);
}
void enqueue(struct Queue*queue,int data)
{
	struct Node*newNode=createNode(data);
	if(isEmpty(queue))
	{
		queue->front=queue->rear=newNode;
	}
	else
	{
		queue->rear->next=newNode;
		queue->rear=newNode;
	}
	printf("%d has been enqueued.\n",data);
}
void dequeue(struct Queue*queue)
{
	if(isEmpty(queue))
	{
		printf("Queue is empty.Dequeue operation failed.\n");
	}
	else
	{
		struct Node*temp=queue->front;
		queue->front=queue->front->next;
		printf("%d has been dequeued.\n",temp->data);
		free(temp);
	}
}
void peep(struct Queue*queue)
{
	if(isEmpty(queue))
	{
		printf("Queue is empty.Peep Operation failed.\n");
	}
	else
	{
		printf("Front element:%d\n",queue->front->data);
	}
}
void display(struct Queue*queue)
{
	if(isEmpty(queue))
	{
		printf("Queue is empty.\n");
	}
	else
	{
		printf("Queue elements: ");
		struct Node*current=queue->front;
		while(current!=NULL)
		{
			printf("%d",current->data);
			current=current->next;
		}
		printf("\n");
	}
}
int main()
{
	struct Queue queue;
	initialize Queue(&queue);
	int choice,data;
	while(1)
	{
		printf("\n Queue Operations.\n");
		printf("1.Enqueue\n");
		printf("2.Dequeue\n");
		printf("3.Peek\n");
		printf("4.Display\n");
		printf("5.Exit\n");
		printf("Enter your choice: ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				printf("Enter the element to enqueue: ");
				scanf("%d",&data);
				enqueue(&queue,data);
				break;
			case 2:
			dequeue(&queue);
			break;
			case 3:
			peep(&queue);
			break;
			case 4:
			display(&queue);
			break;
			case 5:
			exit(0);
			default:
			printf("Invalid choice.Please try again.\n");	
		}
	}
	return 0;
}

