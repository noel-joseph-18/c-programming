#include <stdio.h>
int main () {
	int n,i,j,k;
	
	printf("enter the number (for size of the pattern) :");
	scanf("%d",&n);
	 
	for(i=1;i<n+1;i++)
	{
		for(j=0;j<=n-i;j++)
		{printf("  ");}
		for(k=0;k<=2*(i-1);k++)
		{printf("* ");}
		printf("\n");
	}
	
	for(i=n-1;i>0;i--){
		for(j=n;j>=i;j--)
		{printf("  ");}
		for(k=1;k<= (2*i-1); k++)
		{printf("* ");}
		
		printf("\n");
		}

	    
	return 0;
}
