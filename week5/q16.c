#include <stdio.h>
int main() {
           int n,i,j;
           printf("enter the array size ");
           scanf("%d",&n);
           int a[n],b[n]; 
           printf("enter the elements of array1 \n ");
           for(i=0;i<n;i++){
           scanf("%d",&a[i]);}
           for(i=0;i<n;i++){
           	b[i]=a[i];
		   }
		    printf("\nThe second array(elements copied from array 1) is :"); 
           for (j = 0; j < n; j++) { 
        printf("%d ", b[j]);}
          
    return 0;
}

