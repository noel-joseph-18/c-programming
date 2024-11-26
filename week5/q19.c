   #include <stdio.h>
    int main()
    {   int i, j, n, m, t, e, p;
    
        printf("Enter array size \n");
        scanf("%d", &n);
        printf("Enter the elements \n");
        int a[n];
        for (i = 0; i < n; i++)
        {scanf("%d", &a[i]);}
 
        printf("Input array elements are \n");
        for (i = 0; i < n; i++)
        {printf("%d\n", a[i]);}
        
        for (i = 0; i < n; i++)
        {for (j = i + 1; j < n; j++)
            {if (a[i] > a[j])
                {    t = a[i];
                    a[i] = a[j];
                    a[j] = t;
                }
             }
        }
 
        printf("Sorted array is (ascending order)\n");
        for (i = 0; i < n; i++)
        { printf("%d\n", a[i]); }
 
        printf("Enter the number to be inserted \n");
        scanf("%d", &e);
 
        for (i = 0; i < n; i++)
        {
            if (e < a[i])
            {
                p = i;
                break;
            }
            if (e > a[n-1])
            { 
                p = n;
                break;
            }
        }
        if (p != n)
        {
            m = n - p + 1 ;
            for (i = 0; i <= m; i++)
            {a[n - i + 2] = a[n - i + 1] ;}
        }
            a[p] = e;
        printf("Final list is \n");
        for (i = 0; i < n + 1; i++)
        {
            printf("%d\n", a[i]);
        } 
        return 0;
    }
