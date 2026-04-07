#include<stdio.h>
int main(){
    int arr[5];
    int i;
    arr[0]=10;
    arr[1]=20;
    arr[2]=30;
    arr[3]=40;
    arr[4]=50;
    

    printf("Enter array elements:");
    for(i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }

    for(i=0;i<5;i++)
    {
        printf("%d\t",arr[i]);
    }
}