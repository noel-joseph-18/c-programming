#include <stdio.h>
int main () {
	int yr1 ;
	printf("enter the year", yr1);
	scanf("%d",&yr1);
	
    if ( yr1%4 == 0)
{
	printf("the given year is leap year");
}
    else if(yr1%4!=0) 
    {
    	printf("the given year is not a leap year");
	}
	return 0;
}
