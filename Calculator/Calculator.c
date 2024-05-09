#include <stdio.h>

int main(){

    char operator;
    double number1;
    double number2;
    double result;

    printf("Enter an operator to use (+ ,- ,/ ,* ): ");
    scanf("%c", &operator);

    printf("Enter first number: ");
    scanf("%lf", &number1);

    printf("Enter second number: ");
    scanf("%lf", &number2);

   switch(operator){
    case '+' :                          // If operator is + add the numbers together
        result = number1 + number2;
        printf("\nresult: %lf", result);
        break;
    case '-' :                          // If operator is - subtract the numbers together
        result = number1 - number2;
        printf("\nresult: %lf", result);
        break;                      
    case '/' :                          // If operator is / divide the numbers together
        result = number1 / number2;
        printf("\nresult: %lf", result);
        break;
    case '*' :                          // If operator is * multiply the numbers together
        result = number1 * number2;
        printf("\nresult: %lf", result);
        break;
    default:
        printf("%c is not a valid operator", operator);
   }


}
