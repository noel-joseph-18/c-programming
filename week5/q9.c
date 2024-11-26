#include <stdio.h>
int main() {
    int n,i,n1,s1,s2=0,m;
    printf("enter the array size ");
    scanf("%d",&n);
    int a[n];n1=n+1;
    printf("enter any %d numbers from 1st %d nnatural numbers \n ",n,n1);
    
    for(i=0;i<n;i++){
    scanf("%d",&a[i]);}
    s1=n1*(n1+1)/2;
         
    for(i=0;i<n;i++){
    	s2+=a[i];
	}
	m=s1-s2;
	printf("the missing number is %d ",m);
    return 0;
}

