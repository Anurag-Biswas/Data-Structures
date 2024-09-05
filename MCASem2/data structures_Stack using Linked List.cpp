#include<stdio.h>
#include<stdlib.h>
struct Node
{
	int data;
	struct Node*next;
};
struct Node*createNode(int data)
{
	struct Node*newNode=(struct Node*)malloc(sizeof(structNode));
	if(newNode==NULL)
	{
		printf("Memory allocation failed.\n");
		exit(1);
	}
	newNode->data=data;
	newNode->next=NULL;
	return newNode;
}
void push(struct Node**top,int data)
{
	struct Node*newNode=createNode(data);
	newNode->next=*top;
	*top=newNode;
	printf("%d pushed to the stack.\n",data);
}
int pop(struct Node**top)
{
	if(*top==NULL)
	{
		printf("Stack is empty.Cannot pop.\n");
		return -1;
	}
	int data=(*top)->data;
	struct Node*temp=*top;
	*top=(*top)->next;
	free(temp);
	return data;
}
int peek(struct Node*top)
{
	if(top==NULL)
	{
		printf("Stack is empty.No element to peek.\n");
		return -1;
	}
	return top->data;
}
void display(struct Node*top)
{
	if(top==NULL)
	{
		printf("Stack is empty.\n");
		return;
	}
	struct Node*current=top;
	printf("Stack elements: ");
	while(current!=NULL)
	{
		printf("%d",current->data);
		current=current->next;
	}
	printf("\n");
}
int main()
{
	struct Node*top=NULL;
	int choice,data;
	while(1)
	{
		printf("\n Menu:\n");
		printf("1.Push an element onto the stack\n");
		printf("2.Pop an element from the stack\n");
		printf("3.Peek at the top element\n");
		printf("4.Display stack elements \n");
		printf("5.Exit\n");
		printf("Enter your choice: ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				printf("Enter the element to push: ");
				scanf("%d",&data);
				push(&top,data);
				break;
			case 2:
			data=pop(&top);
			if(data!=-1)
			{
				printf("Popped element : %d\n",data);
				break;
			}
			case 3:
				data=peek(top);
				if(data!=-1)
				printf("Top element :%d\n",data);
				break;
			case 4:
				display(top);
				break;
			case 5:
				printf("Exiting the program.\n");
				exit(0);
			default:
				printf("Invalid choice.Please try again.\n");
		}
	}
	return 0;
}
