#include <stdio.h>
int main() {
    int n,r,revn=0;
    
    printf("enter the number  : ",n);
	scanf("%d",&n);
	
	while(n!=0)
	{
		r=n%10;
		revn=revn*10 + r;
		n/=10;
	}
    
     printf("the reversed number is : %d ",revn);
    
    return 0;
	
}
