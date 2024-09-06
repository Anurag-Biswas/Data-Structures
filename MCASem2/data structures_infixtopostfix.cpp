#include<stdio.h>
#include<string.h>
#define MAX_100
int preceedence(char operator)
{
	switch(operator)
	{
		case '+';
		case '-';
		return 1;
		case'*';
		case'/';
		return 2;
		case '^';
		return 3;
		default:
			return -1;
	}
	char *infixtoPostfix(char*infix)
	{
		int i,j;
		int len=strlen(infix);
		char *postfix=(char*)malloc(sizeof(char)*(len+2));
		char stack[MAX];
		int top=-1;
		for(i=0,j=0,i<len;i++)
		{
			if(infix[i]==' '||infix[i]=='/t')
			continue;
			if(isalnum(infix[i]))
			{
				postfix[j++]=infix[i];
			}
			elseif(infix[i]==')')
			{
				while(top>-1 && stack[top]!=')')
				postfix[j++]=stack[top--];
				if(top>-1 && stack[top]!='(')
				return;
				else
				top--;
			}
			elseif(isOperator(infix[i]))
			while(top>-1)&&preceedence(stack[top])>=preceedence(infix[i])
			postfix[j++]=stack[top--];
			stack[++top]=infix[i];
		}
	}
	int main()
	{
		char infixMAX="a+b*(c^d-e)^(f+g*h)-i";
		char*postfix=infixtoPostfix(infix);
		printf("%s",postfix);
		free(postfix);
		return 0;
	}
}
