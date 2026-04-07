// #include<stdio.h>
// int main()
// {
//     int i;
//     int arr[3][3];

//     arr[0][0]=10;
//     arr[1][2]=20;
    
    

//     for(i=0;i<3;i++)
//     {
//         scanf("%d",&arr[i][i]);
//     }

//     for(i=0;i<3;i++)
//     {
//         printf("%d\n",arr[i][i]);
//     }
// }



#include<stdio.h>
int main()
{
    int i;
    int arr[3][3];

    arr[0][1]=10;
    arr[1][2]=20;

    for(i=0;i<3;i++)
    {
        scanf("%d",&arr[i][i]);
    }

    for(i=0;i<3;i++)
    {
        printf("%d ",arr[i][i]);
    }
}