#include<stdio.h>
#include<math.h>
int main()
{
    float a,b;
    printf("Enter first number : ");
    scanf("%f",&a);
    printf("\nEnter last number : ");
    scanf("%f",&b);
    printf("\nTABLE OF POWERS");
    printf("\nNumber \t   Square_root \t\tSquare  \t Cube");
    while (a<=b)
    {
        printf("\n%.2f",a);
        printf("\t\t%.2f",sqrt(a));
        printf("\t\t%.2f",a*a);
        printf("\t\t%.2f",a*a*a);
        a=a+1;
    }
}
