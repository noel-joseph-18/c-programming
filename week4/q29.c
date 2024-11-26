#include <stdio.h>
int main () {
	int n,i,j,k;
	
	printf("enter the number (for size of the pattern) :");
	scanf("%d",&n);
	 
for(i=0;i<n;i++)
{
	for(j=0;j<n-i-1;j++)
	printf("  ");
	for(k=0;k<=i;k++){
		if((i+1)%2!=0)
			printf("* ");
			else printf("- ");
	} 
	
	printf("\n");
}
    for(i=n-1;i>=1;i--){
    	for(j=0;j<n-i;j++){
    		printf("  ");
		}
		for(k=0;k<i;k++){
		if(i%2!=0)
			printf("* ");
			else printf("- ");
	}printf("\n");
	}
	return 0;
}
