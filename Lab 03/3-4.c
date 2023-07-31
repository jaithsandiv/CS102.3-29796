#include <stdio.h>
int main()
{
    float d,c,a,r,pi=3.14159;
    printf("Enter the radius of the circle: ");
    scanf("%f",&r);

    printf("The Diameter of the circle is %.2f \n",2*r);
    printf("The Circumference of the circle is %.2f \n",2*pi*r);
    printf("The Area of the circle is %.2f \n",pi*r*r);
}
