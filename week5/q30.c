#include <stdio.h>

int main() {
	int N,M,i;
    printf("enter the array size :"); 
	scanf("%d",&N);
	int a[N];
	printf("enter the %d numbers ",N);
    for(i=0; i<N; i++)
    {scanf("%d", &a[i]);}
    printf("enter the array size :"); 
	scanf("%d",&M);
	int b[M];
	printf("enter the %d numbers ",M);
    for(i=0; i<M; i++)
    {scanf("%d", &b[i]);}
    int max = (N > M ? N : M) + 1; 
    int res[max];
    int size = 0;

    for (i = 0; i < N / 2; i++) {
        int t = a[i];
        a[i] = a[N - i - 1];
        a[N - i - 1] = t;
    }
    for (i = 0; i < M / 2; i++) {
        int t = b[i];
        b[i] = b[M - i - 1];
        b[M - i - 1] = t;
    }

    int c = 0;

    for (i = 0; i < N || i < M; i++) {
        int da = (i < N) ? a[i] : 0;
        int db = (i < M) ? b[i] : 0;

        int sum = da + db + c;
        res[size++] = sum % 10;
        c = sum / 10;
    }

    if (c!=0) {
        res[size++] = c;
    }

    for (i = 0; i < size / 2; i++) {
        int t = res[i];
        res[i] = res[size - i - 1];
        res[size - i - 1] = t;
    }

    printf("The sum is: ");
    for (i = 0; i < size; i++) {
        printf("%d", res[i]);
    }
    printf("\n");

    return 0;
}

