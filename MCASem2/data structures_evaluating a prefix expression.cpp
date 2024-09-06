#include<iostream>
using namespace std;
#include<stdio.h>

double stack[50];
int top=-1;
void push(double c)
{
	stack[++top]=c;
}
double pop()
{
	return stack[top--];
}
bool_is_operand(char c)
{
	return isdigits(c);
}
double evaluate(string exp)
{
	int j;
	double a,b;
	for(j=exp.size()-1;j>=0;j--)
	{
		if(is_operand(exp[j]))
		push(exp[j]-'0');
		else
		{
			a=stack[top];
			pop();
			b=stack[top];
			pop();
			switch(exp[j])
			{
				case '+':
					push(a+b);
					break;
				case '-':
				    push(a-b);
					break;
				case '*':
				    push(a*b);
					break;
				case'/':
				    push(a/b);
					break;			
			}
		}
	}
	return stack[top];
}
int main()
{
	string exp;
	printf("\n Enter the prefix expression: ");
	scanf("%s",&exp);
	printf("prefix evaluation :%d",evaluate(exp));
	return 0;
}
