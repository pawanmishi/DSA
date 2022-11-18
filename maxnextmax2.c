#include<stdio.h>
main()
{

    int tour[100], n , i;
    printf("Give n :");
    scanf("%d",&n);
    printf("\n n =%d\n", n);

    for(i=n; i<=2*n-1; i++)
        scanf("%d", &tour[i]);

    buildtour(tour, n);

    // Printing tournament.
   // for(i=1; i<=2*n-1; i++)
     //   printf("%d \n", tour[i]);


    printf("\n  Max = %d \n ", tour[1]);
    printf(" \n Next max= %d \n", nextmax(tour, n));

}
buildtour(tour, n)
int tour[], n;
{
    int i;
    for(i=2*n-2; i>1; i=i-2)
        tour[i/2]=maxi(tour[i], tour[i+1]);

}

int nextmax(tour, n)
int tour[], n;
{
    int i =2, next;

    //Downward traversal

    next=mini(tour[2], tour[3]);


    while (i <= 2*n-1)

        {



        if (tour[i] > tour[i+1])
        {
            next=maxi(tour[i+1], next);

            i= 2*i;

        }
        else
        {
            next=maxi(tour[i], next);

            i=2*(i+1);


        }

        }
return(next);
}

//8 10 15 6 9 4 3


int maxi(int i, int j)
{
    if(i>j) return (i);
    else return(j);
}

int mini(int i, int j)
{
    if(i<j) return (i);
    else return(j);
}

