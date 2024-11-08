#include<stdio.h>
int main()
{
    int num1, num2, operation, ans;
    printf("Enter number 1: ");
    scanf("%d", &num1);
    printf("Enter number 2: ");
    scanf("%d", &num2);
    printf("Which operation? \n Addition=1 \n Subtraction=2 \n Multiplication=3 \n Division=4 \n");
    scanf("%d", &operation);

    switch(operation)
    {
        case 1:
            ans=num1+num2;
            break;
        case 2:
            ans=num1-num2;
            break;
        case 3:
            ans=num1*num2;
            break;
        case 4:
            ans=num1/num2;
            break;
        default:
            printf("Entered operation is invalid!");
    }
    printf("Answer is %d", ans);
    return 0;
}