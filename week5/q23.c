#include <stdio.h>
    int main()
    {   int n,i,j,t,k;
    
        printf("Enter size of square matrix \n");
        scanf("%d", &n);
        int a[n][n],b[n][n],c[n][n];
        printf("enter the elements of the 1st square matrix(A)\n");
        for(i=0;i<n;i++){
        	for(j=0;j<n;j++){ 
        		printf("element at index %d %d ",i,j);
        		scanf("%d",&a[i][j]);
			}
		}
		printf("enter the elements of the 2nd square matrix(B)\n");
        for(i=0;i<n;i++){
        	for(j=0;j<n;j++){ 
        		printf("element at index %d %d ",i,j);
        		scanf("%d",&b[i][j]);
			}
		}
		printf("The A matrix is \n");
		for(i=0;i<n;i++){
			for(j=0;j<n;j++){
			printf("%d ",a[i][j]);
			}
			printf("\n");
		}
		printf("The B matrix is \n");
		for(i=0;i<n;i++){
			for(j=0;j<n;j++){
			printf("%d ",b[i][j]);
			}
			printf("\n");
		}
		for(i=0;i<n;i++){
			for(j=0;j<n;j++){
				t=0;
				for(k=0;k<n;k++){
					t=t+a[i][k]*b[k][j];
				} c[i][j]=t;
			}
		}
		printf("The C(=AxB) matrix is \n");
		for(i=0;i<n;i++){
			for(j=0;j<n;j++){
			printf("%d ",c[i][j]);
			}
			printf("\n");
		}
		
      return 0;
	}
        
