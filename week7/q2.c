#include <stdio.h>
#include <stdlib.h>

int main(){
	int n,i,max;
	printf("the number of elements in the array ");
	scanf("%d",&n);
	int *a= (int*)malloc(n*sizeof(int));
		if(n==0)
	{
		printf("error ");
		return 0;
	}
	
	printf("enter the elements ");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);

	max=a[0];
	for(i=0;i<n;i++) 
	{
		if(a[i]>max)
		max=a[i];
	}
	printf("the largest element in the array is %d",max);
	
	free(a)	;
	return 0;
}
