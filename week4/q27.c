#include <stdio.h>
int main () {
	int n,i,j;
	
	printf("enter the number (for size of the pattern) :");
	scanf("%d",&n);
	
	for(i=0;i<=n;i++){
	
		for(j=0;j<i;j++)
		{ 
		printf("%c ",i+64) ; }
        printf("\n");
	}
	
	return 0 ;
}
