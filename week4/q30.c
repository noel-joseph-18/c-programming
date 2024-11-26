#include <stdio.h>
int main() {
    int n,i,j,k;
    printf("Enter the size of the V pattern: ");
    scanf("%d", &n);

    for ( i = 0; i < n; i++) {
        for ( j = 0; j < i; j++) {
            printf(" ");
        }
        printf("*");
        
        for ( k = 0; k < (n - i - 1) * 2 - 1; k++) {
            printf("-");
        }
        if (i != n - 1) {
            printf("*");
        }      
        printf("\n");
    }

    return 0;
}

