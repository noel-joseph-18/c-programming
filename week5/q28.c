#include <stdio.h>
int main () {
	int n,i,j,t,ceil=-1;
	
     printf("enter the array size :"); 
	scanf("%d",&n);
	int a[n];
	printf("enter the %d numbers\n ",n);
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
    printf("\nEnter the target number: ");
    scanf("%d", &t);
        for (i = 0; i < n; i++) {
        if (a[i] >= t) {
            ceil = a[i];  
            break;
        }
    }
    if (ceil != -1) {
        printf("Ceiling of %d is %d\n", t, ceil);
    } else {
        printf("No ceiling found for %d in the array\n", t);
    }    
	return 0 ;
}
