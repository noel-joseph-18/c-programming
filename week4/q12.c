#include <stdio.h>
int main () {
	int n,i,j,k;
	
	printf("enter the number (for size of the pattern) :");
	scanf("%d",&n);
	 
	for(i=0;i<n;i++){ 
		for(j=0;j<n-i;j++)
		{printf("* ") ;  }
		printf("\n");
	}
	for(i=n;i<2*n;i++){
		for(j=0;j<=i-n;j++){
			printf("* ");
		} printf("\n");
	}
	
	return 0;
}
