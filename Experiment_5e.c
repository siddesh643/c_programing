/* 
NAME: Siddesh
UIN: 2510044
CLASS: CIVIL
ROLL NO.: 31
DIV.: B
*/
#include <stdio.h>

long long factorialRecursive (long long num)
{
if (num <= 1)
return 1;

return num * factorialRecursive(num - 1);
}

int main()
{
long long num; 
printf("\t\t\t***Recursive Factorial Function***\n\n");
printf("Enter Number = ");
scanf("%lld", &num);

if (num < 0)
{
printf("Factorial of negative numbers is not defined!\n");
}

else
{ 
printf("Factorial of %lld is %lld\n", num, factorialRecursive(num));
}

return 0;
}
