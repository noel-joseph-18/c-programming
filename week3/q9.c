#include <stdio.h>
int main() {
    int till,a=0,b=1,next;
     
    printf("enter the number till which fibonaucci sequence  is to be printed : ",till);
	scanf("%d",&till);
	
	if(till>=0)
	{
		printf("Fibonaucci sequence till %d is \n ", till);
		printf("%d ",a);
	}
      else { printf("error");
	  }
	while(b<=till){
		printf("%d ",b);
		a=b;
		b=next;
	    next =a+b;
	}
	
    return 0;
	
}
