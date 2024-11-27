#include <stdio.h>
#include <math.h>
int main ()
{
       float m,h,v,e,g=9.8;
       
       printf("enter the values of mass(m) height(h) velocity(v)  Gravity (g)=9.8\n",m,h,v);
       scanf("%f%f%f",&m,&h,&v);
       printf("Mechanical energy (E) = mgh+1/2mv2\n");
       
       e=m*g*h + 1/2*m*pow(v,2);
       printf("the mechanical energy is %f",e);
   
	return 0;
	
	
}
