#include <stdio.h>

int main() {
    int num1, num2, sol;
    char op;

    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    printf("Options: + - * \n Select an operator: ");
    scanf(" %c", &op);

    if(op == '+'){
        sol = num1 + num2;
        printf("%d + %d = %d", num1, num2, sol);
    }else if(op == '-'){
        sol = num1 - num2;
        printf("%d - %d = %d", num1, num2, sol);
    }else if(op == '*'){
        sol = num1 * num2;
        printf("%d * %d = %d", num1, num2, sol);
    }else if(op == '/'){
        if(num2 == 0){
            printf("Please input a number other than 0");
        } else{
            sol = num1 / num2;
        printf("%d / %d = %d", num1, num2, sol);
        }
    }else{
        printf("Please input one of the choices");
    }
    return 0;
}