
#include<stdio.h>
main()
{
    int data[100], i, j , n , temp;
    printf("Number of elements wanted to sort:");
    scanf("%d", &n);
    for(int l= 0; l<n;l++){
        scanf("%d", &data[l]);
    }
    for(i=0; i<n; i++){
        for (j=i+1; j<n; j++){
            if (data[i]> data[j]){
                temp=data[i];
                data[i]=data[j];
                data[j]=temp;
            }
        }

    }
    printf("SORTED LIST");
    for(int k= 0; k<n; k++)
    {
        printf(" \n %d \n", data[k]);
    }
}
