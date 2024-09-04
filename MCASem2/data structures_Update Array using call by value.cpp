#include<stdio.h>
void UpdateArray(int arr[],int size)
{
	printf("Inside the function:\n");
	for(int i=0li<size;i++)
	{
		arr[i]*=2;
		printf("%d",arr[i]);
	}
	printf("\n");
}
int main()
{
	int array[]={1,2,3,4,5};
	int size=sizeof(array)/sizeof(array[0]);
	printf("Before calling the function:\n");
	for(int i=0;i<size;i++)
	{
		printf("%d",array[i]);
	}
	printf("\n");
	UpdateArray(array,size);
	printf("After calling the function:\n");
	for(int i=0;i<size;i++)
	{
		printf("%d",array[i]);
	}
	printf("\n");
	return 0;
}
