#include <stdio.h>
int main () {
	int n,i,j,k;
	
	printf("enter the number of rows :");
	scanf("%d",&n);
	printf("enter the starting number  :");
	scanf("%d",&k);
	 	 
	for(i=0;i<n;i++)
	{ for(j=0;j<=i;j++)
		{printf("%d ",k);}
     	k++;
		printf("\n");
	}
	k-=1;	
	for(i=n;i<2*n;i++)
	{for(j=0;j<2*n-i;j++)
	{printf("%d ",k);}
	k--;
	printf("\n");
	}	
	return 0;
}
