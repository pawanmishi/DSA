
#include<stdio.h>
main()
{

    int n, max, min, number, i;
    scanf("%d", &n);
    if (n >0)
    {
        scanf("%d", &number);
        max=number;
        min=max;
        for(i=1; i<n; i++)
        {
            scanf("%d", &number);
            if (number>max) max=number;
            if (number< min) min=number;
        }
        printf("Maximum  is %d \n ", max);
        printf("Minimum  is %d", min);

    }
}
