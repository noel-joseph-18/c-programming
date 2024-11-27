#include <stdio.h>
int main ()
{
    int a, b;
     printf("Enter the two numbers :\n");
     printf("a=",a);
     scanf("%d",&a);
     printf("b=",b);
  scanf("%d",&b);
  
	a=a+b;
	b=a-b;
	a=a-b;
	printf("a=%d,b=%d\n",a,b);
	return 0;
	
}
