/*to separate  single array to arrays of odd and even integers  */
#include <stdio.h>
int main()
{
    int n,i,j=0,k=0,s1,s2;

    printf("Enter size of array: ");
    scanf("%d", &n);
    int a[n],b[n],c[n];
    
    printf("Enter elements in array(integers): ");
    for(i=0; i<n; i++)
    {scanf("%d", &a[i]);}
    
    for(i=0;i<n;i++){
    	if(a[i]%2==0){
    		b[j]=a[i];
    		j++;
		} 
		else {
			c[k]=a[i];k++;
		}
	}

	printf("the new array of only even integers is \n ");
	for(i=0;i<j;i++){
		printf("%d ",b[i]);
	}
		printf("\nthe new array of only odd integers is \n ");
        for(i=0;i<k;i++){
		printf("%d ",c[i]);
	}
return 0;
}

