#include<stdio.h>
#include<stdlib.h>
int main()
{
	int initialsize=5;
	int newsize=10;
	int *arr=(int*)calloc(inialsize,sizeof(int));
	if(arr==NULL)
	{
		printf("Memory allocation error.\n");
		return 1;
	}
	for(int i=0;i<initialsize;i++)
	{
		arr[i]=i+1;
	}
	printf("Initial elements:\n");
	for(int i=0;i<initialsie;i++)
	{
		printf("%d",arr[i]);
	}
	printf("\n");
	arr=(int*)realloc(arr,newsize*sizeof(int));
	if(arr==NULL)
	{
		printf("Memory reallocation error.\n");
		return 1;
	}
	for(int i=initialsize;i<newsize;i++)
	{
		arr[i]=i+1;
	}
	printf("Reallocated elements:\n");
	for(int i=0;i<newsize;i++)
	{
		printf("%d",arr[i]);
	}
	printf("\n");
	free(arr);
	return 0;
}
