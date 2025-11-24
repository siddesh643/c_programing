/*
NAME: Siddesh
UIN: 2510044
CLASS: CIVIL
ROLL NO.: 31
DIV.: B
*/
#include <stdio.h>

long long factorialIterative(int num){
    if (num < 0)
        return -1; // factorial not defined for negatives

    long long prod = 1;

    for (int i=1; i <= num; i++){
        prod *= i;
    }
    return prod;
}

int main(){
    int num;
    printf("\t\t\t***Iterative Factorial Function***\n\n");

    printf("Enter Number = ");
    scanf("%d", &num);

    long long result = factorialIterative(num);

    if (result == -1)
        printf("Factorial of negative numbers is not defined!\n");
    else
        printf("Factorial of %d is %lld\n", num, result);
    return 0;
}
