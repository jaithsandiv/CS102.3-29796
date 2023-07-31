#include <stdio.h>

int main()
{
   int mno;
   printf("Enter Month Number: ");
   scanf("%d",&mno);
   switch(mno)  {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            printf("31 Days in the %d Month",mno);break;
        case 4:
        case 6:
        case 9:
        case 11:
            printf("30 Days in the %d Month",mno);break;
        case 2:
            printf("28 Days in the %d Month",mno);break;
        default:
            printf("The Entered Month Number is Invalid");

   }

}
