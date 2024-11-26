#include <stdio.h>
    int main()
    {   int n,i,j,c=0;
    
        printf("Enter 2D array size (nxn) \n");
        scanf("%d", &n);
        int a[n][n],b[n][n];
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
	    	for(j=0;j<n;j++){
	    		if(i==j){b[i][j]=1;}
	    		else b[i][j]=0;
			}
		}
		for(i=0;i<n;i++){
			for(j=0;j<n;j++){
				if(a[i][j]!=b[i][j]){c++;
				}
			}
		}
		if(c==0)
		{printf("the matrix given is identity matrix");}
		else printf("the matrix given is not identity matrix");
      return 0;
	}
        
