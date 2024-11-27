#include <stdio.h>
int main(){
	int i,j,n,r,p,q,k;
	printf("program to print spiral matrix of order n \n");
	printf("enter the order n ");
	scanf("%d",&n);
    int a[n][n];
    k=1;
    for(i=0;i<(n+1)/2;i++){
    	for(j=i;j<=n-i-1;j++)
    	a[i][j]=k++;
    	for(p=i+1;p<=n-i-1;p++)
    	a[p][n-i-1]=k++;
    	for(q=n-2-i;q>=i;q--)
    	a[n-i-1][q]=k++;
    	for(r=n-2-i;r>i;r--)
    	a[r][i]=k++;	
	}
    
	for(i=0;i<n;i++){
		for(j=0;j<n;j++)
		printf("%3d ",a[i][j]);
		printf("\n");
	}
	
	return 0;
}
