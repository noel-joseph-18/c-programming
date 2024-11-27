#include <stdio.h>
int main () {
	int num1,num2,num3 ;
	printf("enter number 1", num1);
	scanf("%d",&num1);
	printf("enter number 2 ",num2);
	scanf("%d",&num2);
	printf("enter number 3", num3);
	scanf("%d",&num3);
	
	if (num1>num2 && num1>num3) 
	{
	printf("num1") ;
}
	else
	{
	 if (num2>num1 && num2>num3) 

		  {
			  	printf("num2") ;
	}

	  else (num3>num1 && num3>num2) ;
	  {
	  	printf("num3") ;
	  }
}
	  return 0 ;
}
