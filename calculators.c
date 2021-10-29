#include<stdio.h>
void main()
{
    printf("1.Addition \n2.Subtraction \n3.Multiplication \n4.Division");
    int a,b;
    int num;
    printf("\nThe value of a is ");
    scanf("%d",&a);
    printf("The value of b is ");
    scanf("%d",&b);
    printf("Select the option ");
    scanf("%d",&num);
    switch(num)
    {
        case 1:
        printf("Addition : %d",a+b);
        break;
        case 2:
        printf("Subtraction is %d",a-b);
        break;
        case 3:
        printf("Multiplication is %d",a*b);
        break;
        case 4:
        printf("Division is %d",a/b);
        break;
        case 5:
        printf ("Remainder is %d",a%b);
        break;
        default:
        printf("Choose for anything");
         
    }
}

