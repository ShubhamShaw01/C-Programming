// wap to find the user given is prime or not
#include <stdio.h>
#include <stdbool.h>

bool isPrime(int num)
{
    if (num <= 1)
    {
        return false;
    }
    for (int i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    printf("Enter the number to check if it's prime or not: ");
    int primeNo;
    scanf("%d", &primeNo);
    if (isPrime(primeNo))
    {
        printf("%d is a prime number.\n", primeNo);
    }
    else
    {
        printf("%d is not a prime number.\n", primeNo);
    }

    return 0;
}
