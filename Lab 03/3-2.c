#include <stdio.h>
int main()
{
    int n1,n2,n3,max,min;
    printf("Enter Three Numbers: ");
    scanf("%d %d %d",&n1,&n2,&n3);

    max=n1;
    min=n1;

    if(max<n2)
        max=n2;
    if(max<n3)
        max=n3;
    if(min>n2)
        min=n2;
    if(min>n3)
        min=n3;

    printf("The Largest Number is %d \n",max);
    printf("The Smallest Number is %d \n",min);
}
