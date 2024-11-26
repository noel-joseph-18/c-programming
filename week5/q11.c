#include <stdio.h>
int main () {
    int n,i,j,c=0;	
	printf("enter the array size :"); 
	scanf("%d",&n);
	
	int a[n];
	printf("enter the %d elements",n);
    for(i=0; i<n; i++)
    {scanf("%d", &a[i]);}
  
   for(i=0;i<n;i++){
   	for(j=i+1;j<n;j++){	   
   		if(a[i]==a[j]){
   			c+=1;
   			if(c==1)
		 printf("first repeating element is %d",a[j]);
		 return ;  }
		 
	   }
	  
   }
   if(c==0)
   printf("repeating element not found ");
	return 0;
}

