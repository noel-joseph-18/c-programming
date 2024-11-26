/*to find frequency of each elements in the array */
#include <stdio.h>
int main()
{
    int n,i,c,j;

    printf("Enter size of array: ");
    scanf("%d", &n);
    int a[n],f[n];
    
    printf("Enter elements in array: ");
    for(i=0; i<n; i++)
    {scanf("%d", &a[i]);f[i]=1;
    }


    for(i=0; i<n; i++)
    {   c = 1;
        for(j=i+1; j<n; j++)
        {
            if(a[i]==a[j])
            {c++;
               f[j] = 0;
            }
        }
        if(f[i] != 0)
        {
            f[i] = c;
        }
    }

    printf("\nFrequency of the elements of the given array : \n");
    for(i=0; i<n; i++)
    {
        if(f[i]!=0)
        {
            printf("%d : frequency is %d\n", a[i], f[i]);
        }     
    }
    return 0;
}
