#include <stdio.h>
int main()
{    
    int number1, number2, sum;
    printf("Enter two integers: ");
    scanf("%d %d", &number1, &number2);
    sum = number1 + number2;      
    printf("The sum is %d",sum);
    return 0;
}
