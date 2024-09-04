#include<stdio.h>
#include<stdlib.h>
int main()
{
	int initialsize=5;
	int newsize=10;
	int *arr=(int*)malloc(initialsize*sizeof(int));
	if(arr==NULL)
	{
		printf("Memory allocation failed\n");
		return 1;
	}
	for(int i=0;i<initailsize;i++)
	{
		arr[i]=i+1;
	}
	printf("Initial elements:\n");
	for(int i=0;i<initialsize;i++)
	{
		printf("%d",arr[i]);
	}
	printf("\n");
	int *newArr=(int*)realloc(arr,newsize*sizeof(int));
	if(newArr==NULL)
	{
		printf("Memory reallocation failed\n");
		free(arr);
		return 1;
	}
	arr=newArr;
	printf("Elements after reallocation:\n");
	for(int i=0;i<newsize;i++)
	{
		printf("%d",arr[i]);
	}
	printf("\n");
	free(arr);
	return 0;
}
