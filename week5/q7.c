#include <stdio.h>

int main () {
    int n,i,j,c=0,k;	
	printf("enter the array size :"); 
	scanf("%d",&n);
	printf("enter the number whose number of occurence to find   :"); 
	scanf("%d",&k);
	int a[n];
	printf("enter the %d elements",n);
    for(i=0; i<n; i++)
    {scanf("%d", &a[i]);}
    
    for(j=0;j<n;j++){
    	if(a[j]==k){
    		c+=1;
		}
	}
	printf("the occurance of %d is %d ",k,c);
	return 0;
}
