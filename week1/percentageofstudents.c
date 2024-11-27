#include <stdio.h>
float main()
{
	float a,b,c,d,e,g;
	printf("marks out of 100 \n");
	printf("subject A marks is ");
	scanf ("%f",&a);
	printf("subject B marks is ");
	scanf ("%f",&b);
	printf("subject C marks is ");
	scanf ("%f",&c);
	printf("subject D marks is ");
	scanf ("%f",&d);
	printf("subject E marks is ");
	scanf ("%f",&e);
	printf("The percentage is %f",g,g=(a+b+c+d+e)*100/500);
	return 0 ;
}
