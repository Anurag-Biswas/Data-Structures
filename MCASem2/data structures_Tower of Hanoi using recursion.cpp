#include<stdio.h>
void towers(int,char,char,char)
int main()
{
	int num;
	printf("Enter the number of disks: ");
	scanf("%d",&num);
	printf("The sequence involved in the Tower of Hanoi are: ");
	towers(num,'A','B','C');
}
void towers(int num,char frompeg,char auxpeg)
{
	if(num==1)
	{
		printf("Move disk 1 from peg %c to peg %c");
		return;
	}
	towers(num-1,frompeg,auxpeg,topeg);
	printf("Move disk 1 from peg %c to peg %c");
	towers(num-1,auxpeg,topeg,frompeg);
}
