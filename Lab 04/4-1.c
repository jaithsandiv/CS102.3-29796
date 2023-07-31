#include <stdio.h>
int main()
{
    int num,ans;
    printf("Enter the Number: ");
    scanf("%d",&num);

    ans=num%2;

    if (ans==1) // ==equal to
        printf("%d is an Odd Number",num);
        else
        printf("%d is an Even Number ",num);
}
