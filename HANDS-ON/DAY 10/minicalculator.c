#include<stdio.h>
int main(){
    int num1 ,num2;
    char operator;
    printf("Enter num1 value:");
    scanf("%d",&num1);
    printf("Enter num2 value:");
    scanf("%d",&num2);
    switch(operator){
        case '+':
        printf("Press 1 for add\n",num1+num2);
        break;
        case '-':
        printf("Press 2 for subtract\n",num1-num2);
        break;
        case '*':
        printf("Press 3 for multiply\n",num1*num2);
        break;
        case '/':
        printf("Press 4 for division\n",num1/num2);
        break;
        case '%':
        printf("Press 5 for modulus\n",num1%num2);
        break;
        default:
        printf("Invalid values");
    }
    return 0 ;
}