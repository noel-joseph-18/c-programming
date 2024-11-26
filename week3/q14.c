#include <stdio.h>
#include <math.h>

int main() {
    int b,r,n=0,v=0;
    
    printf("enter the binary number : ",b);
    scanf("%d",&b);
    
    for(b;b>0;v++)
    {
    	r=b%10;
    	n+= r*pow(2,v);
    	b/=10;
	}
    
   printf("the equivalent decimal number is %d ",n);
   return 0;
}
