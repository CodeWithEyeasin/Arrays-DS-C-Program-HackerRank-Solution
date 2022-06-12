#include <stdio.h>


int main()
 {

    int n,i;
    int array[1000];
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {
        scanf("%d ",&array[i]);
    }
    for (i=n-1;i>=0;i--)
    {
        printf("%d ", array[i]);
    }
    return 0;
}
