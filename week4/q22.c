#include <stdio.h>
int main () { 
	int n,i,j;
	
	printf("enter the number (for quantity) :");
	scanf("%d",&n);
	 	 
	for(i=0;i<n;i++)
	{ for(j=0;j<=i;j++)
		{printf("%d",i+1);
		if(j<i){
		printf("*");}
		}
		printf("\n");
	}
	i-=1;
	for(i=n;i>=1;i--)
	{for(j=0;j<i;j++)
	{printf("%d",i);
		if(j<i-1)
		printf("*");}
       printf("\n");
	}	
	return 0;
}
