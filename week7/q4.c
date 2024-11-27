#include <stdio.h>
#include <stdlib.h>
int main(){
	
   int *a1,*a2,*net,n1,n2,i;
   printf("no of elements in the 1st array \n");
   scanf("%d",&n1);
    printf("no of elements in the 2nd array \n");
   scanf("%d",&n2);
   a1=(int*)malloc(n1*sizeof(int));
   a2=(int*)malloc(n2*sizeof(int));   
   printf("enter elements in the first array\n");
   for(i=0;i<n1;i++){
   	scanf("%d",&a1[i]);
   }
   printf("enter elements in the second array\n");
   for(i=0;i<n2;i++){
   	scanf("%d",&a2[i]);
   }
   net=(int*)malloc((n1+n2)*sizeof(int));
    
    for(i=0;i<n1;i++)
    net[i]=a1[i];
    for(i=0;i<n2;i++)
    net[n1+i]=a2[i];
    printf("the combined array is ");
    for(i=0;i<n1+n2;i++)
    printf("%d ",net[i]);
    
    printf("\n");
    free(a1);
    free(a2);
    free(net);
   return 0;
}

