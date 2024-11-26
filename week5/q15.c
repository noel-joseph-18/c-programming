#include <stdio.h>

int main () {
    int n,i,j,k,c,d;	
	printf("enter the array size :"); 
	scanf("%d",&n);
	int a[n];
	printf("enter the %d elements",n);
    for(i=0; i<n; i++)
    {scanf("%d", &a[i]);}
    
    for(j=0;j<n;j++){
    	c=0;d=0;
	 for(k=0;k<n;k++){
	 	if(a[j]==a[k])
		 {c++;}
	 }
	 if(c>n/2){
	 	printf("majority element is %d",a[j]);d+=1;
	 	break;
	 }
	}
    
	if(d==0){
		printf("no majority element found ");
	}	
	return 0;
}
