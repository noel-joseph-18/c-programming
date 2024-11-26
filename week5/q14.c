#include <stdio.h>
int main() {
           int n,j=0,k=0,i,l,s,m=0;
           printf("enter the array size ");
           scanf("%d",&n);
           int a[n]; 
           printf("enter the elements \n ");
           for(i=0;i<n;i++){
           	scanf("%d",&a[i]);}
           	printf("enter the  sum of numbers  ");
           scanf("%d",&s);
           	printf("\n is there any triplets  in array whose sum is the above \n");

          for(i=0;i<n;i++){
          	if(k==0)
          	for(j=1;j<n;j++)
          	if(m==0){
			  for(l=2;l<n;l++){
          		if(a[i]+a[j]+a[l]==s){
          			k+=1;m+=1;
          			printf("(%d,%d,%d),true ",a[i],a[j],a[l]);
          			break;
				  } 
			  }  
		  } 
	}
		  if(k==0){
		  	printf("false , no such triplets");
		  }
    return 0;
}

