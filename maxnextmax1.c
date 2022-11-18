
#include<stdio.h>
main()
{
    int n,m, max, nextmax, i, numb;
    printf("Give n :");
    scanf("%d",&n);
    printf("\n n =%d\n", n);

    scanf("%d%d", &max, &nextmax); //read first and second numbers
    if(max< nextmax)swap(&max, &nextmax);

    for(i=1; i<=n-2;i++){
        scanf("%d", &numb);
        if (numb> max){
            nextmax=max;
            max=numb;
        }
        else if(numb>nextmax){
            nextmax=numb;
        }
    }

 printf("Max= %d, Nextmax=%d", max, nextmax);
}



int swap(i,j)
int *i, *j;
{

    int temp;
    temp=*i;
    *i=*j;
    *j=temp;
}
