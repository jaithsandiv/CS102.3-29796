#include<stdio.h>
int main()
{
    int mark[10];
    int i,total=0;
    float avg;

    printf("Enter 10 Marks:");

    for(i=0;i<10;i++)
    {
        scanf("%d",&mark[i]);
        total+=mark[i];
    }

    avg=(float)total/10;
    printf("The total: %d \n",total);
    printf("The Average: %.2f \n",avg);

    if(avg<50)
        printf("Fail");
    else
        printf("Pass");
}
