#include <stdio.h>
int main() {
	int i,j,s,n;
	printf("enter the number of rows :",n);
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		for (s=0;s<2*(n-i)-1;s++)
		{printf(" ");
		}
		for(j=0;j<i+1;j++)
		{
		printf("* ");}
		printf("\n");
	}
	return 0 ;
}
	
