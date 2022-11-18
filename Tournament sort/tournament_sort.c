
#include<stdio.h>
main()
{
    int tour[100], n , i, min;
    printf("Give n :");
    scanf("%d",&n);
    printf("\n n = %d\n", n);

    for(i=n; i<=2*n-1; i++)
        scanf("%d", &tour[i]);

    //Build tournament

    buildtour(tour, n);
    min=minval(tour, n)-1;
    //printf("\n %d \n", min);

    //Sorting

    //printf("\n Sorted list are :\n ");
    for (i=1;i<=n;i++)
    {
        printf("\n %d \n", tour[1]);
        getnext(tour, n , min);
    }

}

buildtour(tour, n) //creating tournament
int tour[], n;
{
    int i;
    for(i=2*n-2; i>1; i=i-2)
        tour[i/2]=maxi(tour[i], tour[i+1]);

}

int getnext(tour, n , min)
int tour[1000], n, min;
{
    int i=2;

    // Downward traversal
    while(i <=2*n-1){
        if (tour[i]> tour[i+1]){
            tour[i]=min;
            i=2*i;
        }
        else{
            tour[i+1]=min;
            i=2*(i+1);}


    }

    //Upward traversal
    for (i=i/2; i>1; i=i/2){
        if (i%2==0)
            tour[i/2]=maxi(tour[i], tour[i+1]);
        else
             tour[i/2]=maxi(tour[i], tour[i-1]);


    }

}

int maxi(int i, int j)
{
    if(i>j) return (i);
    else return(j);
}

int minval(tour, n)
int tour[1000], n;

{   int minimum;
    int i=n;
    minimum=tour[i];


    for (i=n; i <=2*n-1; i++)
    {
        if (minimum >= tour[i])
            minimum=tour[i];

    }
    return (minimum);
}

