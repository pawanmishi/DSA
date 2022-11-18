
#include<stdio.h>
main()
{

    int n,m,max,min,i,numb1,numb2;
    int large[100], small[100];
    int index1=1, index2=1;

    // Read no. of numbers

    printf("Give n:");
    scanf("%d",&n);
    printf("\n n=%d \n", n);

    // Initialize max and min

    scanf("%d", &max);
    min=max;
    m=n-1;
    if(n%2==0)
    {

        scanf("%d", &min);
        if(max < min) swap (&max, &min);
        m=m-1;
    }

    // Compute min and max
    for(i=1; i<=m/2;i++)
    {

        scanf("%d%d", &numb1,&numb2);
        if (numb1< numb2) swap(&numb1, &numb2);
        if( numb1> max) max=numb1;
        if(numb2< min)  min=numb2;
    }



  // Print the result
  printf("\n Max= %d, Min=%d \n", max, min);


}

int swap(i,j)
int *i, *j;
{

    int temp;
    temp=*i;
    *i=*j;
    *j=temp;
}

