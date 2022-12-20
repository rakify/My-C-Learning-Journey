#include <stdio.h>

int main()
{
    int a,b;
    int op;
    printf("Enter Two Numbers:\n");
    scanf("%d %d",&a,&b);
    printf("1:\t Addition\n2:\t Substraction\n3:\t Multiplication\n4:\t Division\n5:\t Modulus\n ENTER YOUR CHOICE\n");
    scanf("%d",&op);

    switch(op)
    {
    case 1:
        printf("Result = %d",a+b);
        break;

    case 2:
        if(a>b)
            printf("Result = %d",a-b);
        else
            printf("Result = %d",b-a);
        break;

    case 3:
        printf("Result = %d",a*b);
        break;
    case 4:
        printf("Result = %f",(float)a/b);
        break;
    case 5:
        printf("Result = %d",a%b);
        break;
    default:
        printf("Invalid Operator!!");
    }
    return 0;
}
