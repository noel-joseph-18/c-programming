#include <stdio.h>
int main() {
    int n,r,b=0,v=1;
    /*n number , r remainder , b for converting to binary number,v place value */
    printf("enter the decimal number : ",n);
    scanf("%d",&n);
    
   while(n>0)
   { 
     r=n%2;
     b=b+r*v;
     n/=2;v*=10;
   }
   
   printf("the equivalent binary number is %d ",b);
   return 0;
}
