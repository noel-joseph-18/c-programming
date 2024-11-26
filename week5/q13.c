#include <stdio.h>
int main() {
           int n,j=0,k=0,i,s;
           printf("enter the array size ");
           scanf("%d",&n);
           int a[n]; 
           printf("enter the elements \n ");
           for(i=0;i<n;i++){
           	scanf("%d",&a[i]);}
           	printf("enter the  sum of numbers  ");
           scanf("%d",&s);
           	printf("\n is there any pairs in array whose sum is the above \n");

          for(i=0;i<n;i++){
          	if(k==0)
          	for(j=1;j<n;j++){
          		if(a[i]+a[j]==s){
          			k+=1;
          			printf("(%d,%d),true ",a[i],a[j]);
          			break;
				  } 
			  }  
		  }
		  if(k==0){
		  	printf("false , no such pairs");
		  }
    return 0;
}

