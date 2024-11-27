#include <stdio.h>

int findgcd(int a, int b)
{
	if(b==0)
	return a;
	else return findgcd(a,a%b);
}

int main (){
	int x,y,gcd;
	printf("enter the two numbers");
	scanf("%d%d",&x,&y);
	gcd=findgcd(x,y);
	printf("the gcd of the given numbers is %d",gcd);
	return 0;
}











