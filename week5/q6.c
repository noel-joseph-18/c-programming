#include <stdio.h>
int main () {
    int n,i,j,t,k;	
	printf("enter the array size :"); 
	scanf("%d",&n);
	printf("enter the value of k  :"); 
	scanf("%d",&k);
	int a[n];
	printf("enter the %d elements",n);
    for(i=0; i<n; i++)
    {scanf("%d", &a[i]);}
     for(i=0;i<n-1;i++){
    	for(j=0;j<n-i-1;j++){
   		if(a[j]>a[j+1]){
   			t=a[j];
   			a[j]=a[j+1];
   			a[j+1]=t;
		   }
		}
	}
    printf("the kth(%d) largest number in the array is %d  ",k,a[n-k]);
    printf("the kth(%d) smallest number in the array is %d  ",k,a[k-1]);

    
 return 0;   
}
