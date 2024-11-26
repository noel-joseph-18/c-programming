#include <stdio.h>
int main() {
	int n,len;
	
    printf("enter the  number N : ",n);
	scanf("%d",&n);
	
	if(n==0)
	{len=1;		}
	else {
	while(n!=0)
	 {
		n/=10;
		len++;
	}
}
	
	printf("the length of the number (no of digits) is %d  ",len);
    return 0;
	
}
