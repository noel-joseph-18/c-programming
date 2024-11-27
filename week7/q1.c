#include <stdio.h>

float average(int arr[],int n){
	int s=0,i;
	for(i=0;i<n;i++){
		s+=arr[i];}
		return (float) s/n;
	}
	

int main(){
	int N,j;
	printf("the number of elements in the array ");
	scanf("%d",&N);
	int a[N];
	printf("the elements(numbers) are\n");
	for(j=0;j<N;j++)
	scanf("%d",&a[j]);
	float avg=average(a,N);
	
	printf("the average of given array elements is %.2f\n",avg);
	return 0 ;
}
