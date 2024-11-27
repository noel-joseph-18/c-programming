#include <stdio.h>
int main ()
{
    int km,m,cm,mm;
    
     printf("Enter the distance in kilometers : \n",km);
     scanf("%d",&km);

     m=km*1000;
     cm=m*100;
     mm=cm*10;
	printf("distance in meters :  %d\n",m);
	printf("distance in centimeters : %d\n",cm);
	printf("distance in millimeters : %d\n",mm);

	
	return 0;
	
	
}
