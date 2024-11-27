#include <stdio.h>
#include <math.h>
int main ()
{
   float p,r,t,si,a,ci;
   printf("eneter the principal amount in Rs :",p);
   scanf("%f",&p);
    printf("eneter the rate of interest(percentage) :",r);
   scanf("%f",&r);
    printf("eneter the time period(year)  :",t);
   scanf("%f",&t);
   
   si=p*r*t/100 ;
   printf("simple interest is %f\n ",si);
   
   a=p*((pow((1+r/100),t)));
   ci=a-p;
   printf("the compound interest is %f",ci);
   
   
   
	return 0;
	
	
}
