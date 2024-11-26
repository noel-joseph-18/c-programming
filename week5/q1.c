#include <stdio.h>
int main () {
	int n,i,j,k,max,min;
	float avg,s=0;
	
	printf("enter the array size :"); 
	scanf("%d",&n);
	int a[n];
	printf("enter the %d elements",n);
    for(i=0; i<n; i++)
    {scanf("%d", &a[i]);}
    max=a[0];min=a[0];
    for(j=0; j<n; j++)
    {if(a[j] > max)
    {max = a[j];}
     if(a[j] < min)
        {min = a[j];
        }
    }
    printf("the maximum number is %d \n the minimum number is %d \n ",max,min);
    
    for(k=0;k<n;k++){
    	s+=a[k];
	} 
	avg=s/n;
	printf("the average is %.2f",avg);
	return 0 ;
}
