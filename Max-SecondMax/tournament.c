
#include<stdio.h>
main()
{
    int tour[100], i, n, m;
    printf("Give n :");
    scanf("%d",&n);
    printf("\n n =%d\n", n);

    for(i=n; i<=2*n-1; i++)
        scanf("%d", &tour[i]);


    //Compute tournament
    for(i=2*n-2; i>1; i=i-2)
         tour[i/2]=maxi(tour[i], tour[i+1]);

    for(i=1; i<=2*n-1; i++)
        printf("%d \n", tour[i]);
}

int maxi(int i, int j)
{
    if(i>j) return (i);
    else return(j);
}


