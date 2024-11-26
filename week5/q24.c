#include <stdio.h>
    int main()
    {   int r,c,i,j,t;
    
        printf("Enter no of rows and columns of the 2D matrix \n");
        scanf("%d %d", &r,&c);
        int a[r][c],b[c][r];
        printf("enter the elements of the  matrix(A)\n");
        for(i=0;i<r;i++){
        	for(j=0;j<c;j++){ 
        		printf("element at index %d %d ",i,j);
        		scanf("%d",&a[i][j]);
			}
		}
		printf("the matrix is \n");
		for(i=0;i<r;i++){
        	for(j=0;j<c;j++){ 
        		printf(" %d ",a[i][j]);
        	}printf("\n");}
        	
		for(i=0;i<r;i++){
			for(j=0;j<c;j++){
				t=a[i][j];
				a[i][j]=b[j][i];
				b[j][i]=t;
			}
		}
		printf("the transpose matrix of the given matrix is A^T(cxr) \n");
		for(i=0;i<c;i++){
			for(j=0;j<r;j++){
				printf("%d ",b[i][j]);
			} printf("\n");
		}
      return 0;
	}
        
