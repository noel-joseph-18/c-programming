#include <stdio.h>
int main () {
	int n,i,j,k;
	
	printf("enter the number (for size of the pattern) :");
	scanf("%d",&n);
	 
	for(i=0;i<n;i++){
		for(j=0;j<i;j++)
		{printf("  ") ;  }
		for(k=0;k<n-i;k++)
		{ printf("* ");
		}
		printf("\n");
	}
	for(i=n;i<2*n;i++){
		for(j=0;j<2*n-i-1;j++){
			printf("  ");
		}
		for(k=0;k<=i-n;k++){
			printf("* ");
		} printf("\n");
	
	}
	
	return 0;
}
