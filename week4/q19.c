#include <stdio.h>
int main () {
	int n,i,j,k;
	
	printf("enter the number (for size of the pattern) :");
	scanf("%d",&n);
	 
	for(i=0;i<n;i++){
	k=0; 
		for(j=0;j<n-i;j++)
		{k++;
		printf("%d ",k) ;  }
		printf("\n");
	}
	return 0;
}
