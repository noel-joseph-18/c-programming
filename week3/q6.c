#include <stdio.h>
int main() {
	int i,n,t;
	t=1;
	printf("enter the natural number N : ",n);
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
	{ 
    t=t*i;
	
	}
	printf("the factorial of the given number is %d  : ",t);
		
	
    return 0;
	
}
