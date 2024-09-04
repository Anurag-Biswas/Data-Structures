#include<stdio.h>
#include<stdlib.h>
int searchElement(int *arr,int size,int target)
{
	for(int i=0;i<size;i++)
	{
		if(arr[i]==target)
		{
			return i;
		}
	}
	return -1;
}
int main()
{
	int size,target;
	printf("Enter size of an array:")
	scanf("%d",&size);
	int *arr=(int*)malloc(size*sizeof(int))
	printf("Enter the elements of the array:\n");
	for(int i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Enter the element to search for:");
	scanf("%d",&target);
	int index=searchElement(arr,size,target);
	if(index!=-1)
	{
		printf("Element %d found at index %d\n",target,index);
	}
	else
	{
		printf("Element %d not found at index %d\n",target,index);
	}
	free(arr);
	return 0;
}
