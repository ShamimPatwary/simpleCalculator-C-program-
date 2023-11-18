#include<stdio.h>
int main()
{
    int n1,n2,result;
    char op;

    printf("Enter first number : ");
    scanf("%d",&n1);
    printf("Enter second number : ");
    scanf("%d",&n2);

    while(getchar()!='\n');

    printf("Enter operator (+,-,*,/,%%) : ");
    scanf("%c",&op);

    switch(op)
    {
    case '+':
        result = n1+n2;
        break;
    case '-':
        result = n1-n2;
        break;
    case '*':
        result = n1*n2;
        break;
    case '/':
        result = n1/n2;
        break;
    case '%':
        result = n1%n2;
    default:
        printf("Error! Operator is not correct. Enter valid operator.\n");
    }
    printf("Result : %d %c %d = %d\n",n1,op,n2,result);
}

