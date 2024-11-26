#include <stdio.h>
    int main()
    {   int r,c,i,j;
    
        printf("Enter no of rows and columns of the 2D matrix \n");
        scanf("%d %d", &r,&c);
        int a[r][c],b[r][c];
        printf("enter the elements of the 1st matrix(A)\n");
        for(i=0;i<r;i++){
        	for(j=0;j<c;j++){ 
        		printf("element at index %d %d ",i,j);
        		scanf("%d",&a[i][j]);
			}
		}
		printf(" 1st matrix(A)\n");
        for(i=0;i<r;i++){
        	for(j=0;j<c;j++){ 
        		printf(" %d ",a[i][j]);		
			} printf("\n");
		}
		printf("enter the elements of the 2nd matrix(B)\n");
        for(i=0;i<r;i++){
        	for(j=0;j<c;j++){ 
        		printf("element at index %d %d ",i,j);
        		scanf("%d",&b[i][j]);
			}
		}
		printf("2nd matrix(B)\n");
        for(i=0;i<r;i++){
        	for(j=0;j<c;j++){ 
        		printf("%d ",a[i][j]);
        	
			} printf("\n");
		}
		printf("The new matrix formed by addition of A and B \n");
		for(i=0;i<r;i++){
			for(j=0;j<c;j++){
			printf("%d ",a[i][j]+b[i][j]);
			}
			printf("\n");
		}
		printf("The new matrix formed by subtraction of A and B \n");
		for(i=0;i<r;i++){
			for(j=0;j<c;j++){
			printf("%d ",a[i][j]-b[i][j]); 
			}
			printf("\n");
		}
      return 0;
	}
        
