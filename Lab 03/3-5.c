#include <stdio.h>
int main()
{
    int n1,n2;
    printf("Enter Two Numbers: ");
    scanf("%d %d",&n1,&n2);

    if(n1%n2==0)
        printf("%d is a multiple of %d \n",n1,n2);
    else
        printf("%d is not a multiple of %d \n",n1,n2);
}
