#include<stdio.h>
#include<string.h>
#include<limits.h>
#include<stdlib.h>
#define MAX 100
int top=-1;
char stack[MAX];
int isFull()
{
	return top=MAX-1;
}
int isEmpty()
{
	return top==-1;
}
void push(int item)
{
	if(isFull())
	return;
	top++;
	stack[top]=item;
}
int pop()
{
	if(isEmpty())
	return INT_MIN;
	return stack[top--];
}
int peek()
{
	if(isEmpty())
	return INT_MIN;
	return stack[top];
}
int checkIfOperand(char ch)
{
	return (ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z')
}
int preceedence(char ch)
{
	switch(ch)
	{
		case '+';
		case '-';
		return 1;
		case '*';
		case '/';
		return 2;
		case '^';
		return 3;
	}
	return -1;
}
int getPostfix(char *expression)
{
	int i,j;
	for(i=0;j=-1;expression[i];++i)
	{
		if(checkIfOperand(expression[i]))
		expressio[++j]=expression[i];
		elseif(expression[i]=='(')
		push(expression[i]);
		elseif(expression[i]==')')
		{
			while(! isEmpty(stack)&&peek(stack)!='(')
			expression[++j]=pop(stack);
			if(! isEmpty(stack)&&peek(stack)!='(')
			return -1;
			else
			pop(stack);
		}
		else
		{
			while(! isEmpty(stack)&&preceedence(expression[i]<=preceedence(peek(stack))))
			expression[++j]=pop(stack);
			push(expression[i]);
		}
	}
	while(! isEmpty(stack))
	expression[++j]=pop(stack);
	expression[++j]='\0';
}
void reverse(char*exp)
{
	int size=strlen(exp);
	int j=size,i=0;
	char temp[size];
	temp[j--]='\0';
	while(exp[i]!='\0')
	{
		temp[j]=exp[j];
		j--;
		i++;
	}
	strcpy(exp,temp);
}
void brackets(char *exp)
{
	int size=strlen(exp);
	reverse(exp);
	brackets(exp);
	getPostfix(exp);
	reverse(exp);
}
int main()
{
	printf("The infix is: ");
	char expression[]="((a/b)+c)-(d+(e*f))";
	printf("%s\n",expression);
	InfixtoPrefix(expression);
	printf("The prefix is: ");
	printf("%s\n",expression);
	return 0;	
}
