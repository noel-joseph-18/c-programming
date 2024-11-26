#include <stdio.h>
int main() {
    int n,r,t;
    
    printf("enter the number : ",n);
    scanf("%d",&n);
    
    t=n%10;
    
    while(n!=0)
    {
    	r=n%10;
    	n/=10;
	}
	
	printf("the sum of first and last digits of the given number is %d ",t+r);
	return 0 ;
}
