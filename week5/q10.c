#include <stdio.h>
int main() {
    int n,i,j;
           printf("enter the array size ");
           scanf("%d",&n);
           int a[n],b[n];
           printf("enter the elements \n ");
           for(i=0;i<n;i++){
           	scanf("%d",&a[i]);} 
    for (i = 0; i < n; i++) {
        b[i] = 0;
    }
    printf("Duplicate elements in the array are\n: ");
    for (i = 0; i < n; i++) {
        if (b[i] == 0) { 
            for ( j = i + 1; j < n; j++) {
                if (a[i] == a[j]) {
                    printf("%d ", a[i]);
                    b[j] = 1; 
                    
                }
            }
        }
    }
    return 0;
}


