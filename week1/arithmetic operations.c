#include <stdio.h>
int main ()
{
    int a,b,add,sub,mul,div,rem;
     printf("Enter the two numbers : ",a,b);
	scanf("%d%d",&a,&b);
	
	add=a+b;
	sub=a-b;
	mul=a*b;
	div=a/b;
	rem=a%b;
	printf("results of arithmetic operations\n");
	printf("addition : %d\n",add);
	printf("subtraction : %d\n",sub);
	printf("multiplicaiton : %d\n",mul);
	printf("division : %d\n",div);
	printf("remainder : %d\n",rem);
	
	return 0;
	
}
