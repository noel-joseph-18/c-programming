#include <stdio.h>
int main () {
	int n,i,j=0,t;
	
     printf("enter the array size :"); 
	scanf("%d",&n);
	int a[n];
	printf("enter the %d numbers ",n);
    for(i=0; i<n; i++)
    {scanf("%d", &a[i]);}
    
   if(j<n-1){
   	t=a[j];
   	a[j]=a[n-j-1];
   	a[n-j-1]=t;
   	j++;   	
   }
   
   printf("reverse array \n");
    for(i=0; i<n; i++)
    {printf("%d ", a[i]);}
   
	return 0 ;
}
