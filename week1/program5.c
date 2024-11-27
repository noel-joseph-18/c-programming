#include <stdio.h>
int main ()
{
    int a, b,t ;
     printf("Enter the two numbers :\n");
     printf("a=",a);
     scanf("%d",&a);
     printf("b=",b);
  scanf("%d",&b);
	t=a;
	a=b;
	b=t;
	
	printf("a=%d,b=%d\n",a,b);
	return 0;
	
}
