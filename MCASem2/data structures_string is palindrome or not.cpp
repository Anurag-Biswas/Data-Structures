#include<stdio.h>
#include<string.h>
int main()
{
	char string[20],string1[20];
	int i,length;
	int flag=0;
	printf("Enter a string:");
	scanf("%s",&string1);
	length=strlen(string1);
	for(i=0;i<length;i++)
	{
		if(string[i]!=string1[length-i-1])
		{
			flag=1;
			break;
		}
	}
	if(flag==0)
	{
		printf("%s is a palindrome",string1);
	}
	else
	{
		printf("%s is not a palindrome",string1);
	}
	return 0;
}
