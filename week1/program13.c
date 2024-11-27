#include <stdio.h>
#include <math.h>
int main ()
{
       int u,a,t,b,c,p;
       
       printf("enter the values of a b c p u t\n",a,b,c,p,u,t);
       scanf("%d%d%d%d%d%d",&a,&b,&c,&p,&u,&t);
       printf("equations\n V=u+at \n S=ut+1/2at^2 \n  T=2*a+sqrt(b)+9c\n H=sqrt(b^2+p^2)\n");
       
       printf("V= %d",u+a*t);
              printf("S= %f",u*t+1/2*a*pow(t,2));

       printf("T= %f",2*a+sqrt(b)+9*c);
              printf("H= %f",sqrt(pow(b,2)+pow(p,2)));

      
       
       
   
   
	return 0;
	
	
}
