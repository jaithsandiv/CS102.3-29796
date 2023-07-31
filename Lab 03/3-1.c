#include <stdio.h>
int main()
{
    int n1,n2,max;
    printf("Enter Two Numbers: ");
    scanf("%d %d",&n1,&n2);

    if(n1>n2)
        max=n1;
    else
        max=n2;

        printf("The Highest Number is %d \n",max);
}
