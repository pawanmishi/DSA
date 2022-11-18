
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

    // Fill up the array Large and small

    for(i=1; i<=m/2;i++){
        scanf("%d%d", &numb1,&numb2);
        if (numb1>=numb2)
        {

            large[index1]=numb1;
            index1++;
            small[index2]=numb2;
            index2++;

        }
        else{
            large[index1]=numb2;
            index1++;
            small[index2]=numb1;
            index2++;
        }
    }

  // Print the result
  printf("\n Max= %d, Min=%d \n", maxi(large, max, index1), mini(small, min, index2));


}

int swap(i,j)
int *i, *j;
{

    int temp;
    temp=*i;
    *i=*j;
    *j=temp;
}

int maxi(arr, max, index)
int arr[], max, index;
{
    int i;
    for(i=1;i<index;i++)
        if (max < arr[i]) max=arr[i];
    return(max);
}
int mini(arr, min, index)
int arr[], min, index;
{
    int i;
    for(i=1;i<index;i++)
        if (min > arr[i]) min=arr[i];
    return(min);
}
