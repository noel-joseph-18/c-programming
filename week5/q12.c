#include <stdio.h>
int main () {
    int n,i,j,s=0 , c[100]={};	
	printf("enter the array size :"); 
	scanf("%d",&n);
	int a[n];
	printf("enter the %d elements",n);
    for(i=0; i<n; i++)
    {scanf("%d", &a[i]);}
  
    for (i = 0; i < n; i++) {
        c[a[i]]++;
    }

    ;
    for (i = 0; i < n; i++) {
        if (c[a[i]] == 1) {
            printf("The first non-repeating element is: %d\n", a[i]);
            s = 1;
            break;
        }
    }

    if (s==0) {
        printf("No non-repeating elements found\n");
    }
	return 0;
}

