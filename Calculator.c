#include<stdio.h>
int main()
{
    char op;
    printf("Enter operator (+,-,*,/) : ");
    scanf("%c",&op);
    double n1,n2;
    printf("Enter numbers n1 & n2 : ");
    scanf("%lf %lf",&n1,&n2);
    switch(op)
    {
    case '+':
        printf("%.1lf + %.1lf = %.1lf",n1,n2,n1+n2);
        break;
    case '-':
        printf("%.1lf - %.1lf = %.1lf",n1,n2,n1-n2);
        break;
    case '*':
        printf("%.1lf * %.1lf = %.1lf",n1,n2,n1*n2);
        break;
    case '/':
        printf("%.1lf / %.1lf = %.1lf",n1,n2,n1/n2);
        break;
    default:
        printf("Error! Operator is not correct. Enter valid operator.");
    }
}
