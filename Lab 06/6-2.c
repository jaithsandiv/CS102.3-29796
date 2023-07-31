#include<stdio.h>
int main()
{
    int num[3][3],i,j,x,y;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("Enter a Value to the [%d][%d]:",i,j);
            scanf("%d",&num[i][j]);
        }
    }

    printf("*******************************************************\n");

    for(x=0;x<3;x++)
    {
        for(y=0;y<3;y++)
        {
            printf("Enter a Value to the [%d][%d]:",x,y);
            scanf("%d",&num[x][y]);
        }
    }
    printf("\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("Enter a Value to the [%d][%d]:",i,j);
            scanf("%d",&num[i][j]);
        }
    }
}

