#include <stdio.h>
int main() {
    int n,r,t,revn=0;
    
    printf("enter the number  : ",n);
	scanf("%d",&n);
	    t=n;
	while(t!=0)
	{
		r=t%10;
		revn=revn*10 + r;
		t/=10;
	}    
     if(revn==n)
     { printf("the given number is a palindrome  ");
	 }
     else { printf("the given number is not a palindrome ");
	 }
    return 0;
	
}
