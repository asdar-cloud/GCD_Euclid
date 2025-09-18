#include <stdio.h>

int GCD(int num0, int num1); // prototype of GCD function

int main()
{
    int num0, num1;
    
    // here I am asking to insert 2 numbers and then assign them to num0 and num1
    printf("Write 2 numbers (num1 num2)-> ");
    scanf("%d %d", &num0, &num1);

    // here I print GCD, where GCD itself is taken from GCD function
    printf("\nGCD = %d", GCD(num0, num1));
}

// recursively finding GCD of 2 numbers
int GCD(int num0, int num1)
{
    if (num0 == num1)
    {
        return num0;
    }
    else if(num0 > num1)
    {
        num0 -= num1;
    }
    else
    {
        num1 -= num0;
    }
    return GCD(num0, num1);
}