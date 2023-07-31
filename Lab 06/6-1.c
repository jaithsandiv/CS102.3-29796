#include <stdio.h>
int main()
{
    int elements[10], min, max, total=0, i, j;
    float avg;
     for(i=0;i<10;i++)
     {
         printf("Enter Element %d: ",i+1);
        scanf("%d",&elements[i]);
     }
     printf("-----------------------------------------------\n");
     min = elements[0];
     max = elements[0];
     for(i=0;i<10;i++)
     {
        if(elements[i]<min)
        {
            min=elements[i];
        }
        if(elements[i]>max)
        {
        }
            max=elements[i];
     }
     for(i=0;i<10;i++)
        {
            total+=elements[i];
        }
        avg=(float)total/10;

     printf("Minimum Value: %d \n",min);
     printf("Maximum Value: %d \n",max);
     printf("Average Value: %.2f \n",avg);
     printf("-----------------------------------------------\n");

     printf("Reverse Order of Elements: ");
     for(i=9;i>=0;i--)
     {
         printf("  %d  ",elements[i]);
     }
}
