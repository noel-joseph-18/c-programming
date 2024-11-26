#include <stdio.h>
int main() {
           int n,t,j=0,k, i;
           printf("enter the array size ");
           scanf("%d",&n);
           int a[n];
           printf("enter the elements \n ");
           for(i=0;i<n;i++){
           	scanf("%d",&a[i]);}

           for ( i = 0; i < n - 1; i++) {
        for ( j = i + 1; j < n; j++) {
            if (a[i] > a[j]) {
                t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
        }
    }
           k = 0; 
    for (i = 0; i < n - 1; i++) {
        if (a[i] != a[i + 1]) {
            a[k++] = a[i];
        }
    } 
	a[k++] = a[n - 1]; 
    printf("Array after removing duplicates: ");
    for (i = 0; i < k; i++) {
        printf("%d ", a[i]);
    }
    return 0;
}

