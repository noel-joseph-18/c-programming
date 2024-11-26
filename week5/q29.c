#include <stdio.h>
int main () {
	int n,i,j,count=0,t=-1,abs;
	
     printf("enter the array size :"); 
	scanf("%d",&n);
	int a[n];
	printf("enter the %d numbers ",n);
    for(i=0; i<n; i++)
    {scanf("%d", &a[i]);}
    
    for(i=0;i<n-1;i++){
    	for(j=0;j<n-i-1;j++){
   		if(a[j]>a[j+1]){
   			a[j]=a[j]+a[j+1];
   			a[j+1]=a[j]-a[j+1];
   			a[j]=a[j]-a[j+1];
		   }
		}
	}
	printf("sorted array\n");
	for(i=0; i<n; i++)
    {printf("%d ",a[i]);}
    for(i=0;i<n;i++){
    	abs=(a[i]<0)? -a[i]: a[i];
    	if (abs != t) {
            count++;
            t = abs;  
        }  
	}
     printf("Number of distinct absolute values: %d\n", count);
	return 0 ;
}
