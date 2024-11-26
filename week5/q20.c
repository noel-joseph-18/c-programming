#include <stdio.h>
    int main()
    {   int i, j,e,p,n;
    
        printf("Enter array size \n");
        scanf("%d", &n);
        printf("Enter the elements \n");
        int a[n];
        for (i = 0; i < n; i++)
        {scanf("%d", &a[i]);} 
        printf("Enter  element/number to be added \n");
        scanf("%d", &e);
        printf("Enter  its position \n");
        scanf("%d", &p);
        n++;
        for(i=n-1;i>=p;i--){
        	a[i]=a[i-1];
		}
           a[p-1]=e;
		printf("\nthe array after insertion of new element\n ");
		for(i=0;i<n;i++){
			printf("%d ",a[i]);
		}
		return 0;
	}
        
