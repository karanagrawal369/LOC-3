//prime or not
#include <stdio.h>

int checkPrime(int num, int i)
{
    if (i != 1) {
        if (num % i != 0) {
            return checkPrime(num, i - 1);
        }
        else {
            return 0;
        }
    }
    else {
        return 1;
    }
}

int main()
{
    int num = 0,b;

    printf("Enter the number: ");
    
    scanf("%d", &num);
    b=num;
    if (checkPrime(num, num / 2) == 1)
        printf("%d  is prime number",b);
    else
        printf("%d is not prime number",b);

    return 0;
}
