#include <stdio.h>
int main () {
	int n,i,j,k;
	
	printf("enter the number (for size of the pattern) :");
	scanf("%d",&n);
	
	for(i=0;i<=n;i++){
		k=65;
		for(j=0;j<i;j++)
		{ 
		printf("%c ",k) ; k++; }
		printf("\n");
	}
	
	return 0 ;
}
