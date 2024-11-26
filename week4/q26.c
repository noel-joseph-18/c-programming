#include <stdio.h>
int main () {
	int n,i,j,k;
	
	printf("enter the number (for size of the pattern) :");
	scanf("%d",&n);
	
	for(i=0;i<=n;i++){
	       k=n;
		for(j=0;j<i;j++)
		{ 
		printf("%c ",k-i+65) ; k++; }
        printf("\n");
	}
	
	return 0 ;
}
