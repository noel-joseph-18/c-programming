#include <stdio.h>
    int main()
    {   int n,i,j,sum=0;
    
        printf("Enter 2D array size (nxn) \n");
        scanf("%d", &n);
        int a[n][n];
        printf("enter the elements of the matrix\n");
        for(i=0;i<n;i++){
        	for(j=0;j<n;j++){ 
        		printf("element at index %d %d ",i,j);
        		scanf("%d",&a[i][j]);
			}
		}
		printf("The 2D array(matrix) is \n");
		for(i=0;i<n;i++){ 
			for(j=0;j<n;j++){
			printf("%d ",a[i][j]);
			}
			printf("\n");
		}
		for(i=0;i<n;i++){
			sum+=a[i][n-i-1];
		}
		printf("the sum of elements of right diagonal of matrix is %d",sum);
      return 0;
	}
        
