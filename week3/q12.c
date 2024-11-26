#include <stdio.h>
int main() {
    int n,r,sum=0;
    
    printf("enter the number : ",n);
    scanf("%d",&n);
    
    while(n!=0)
    {
    	r=n%10;
    	sum+=r;
    	n=n/10;
	}
    
    printf("the sum of the digits of the number is %d",sum);
    return 0;
	
}
