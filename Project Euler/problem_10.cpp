/* 
The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.
Find the sum of all the primes below two million.*/

#include <iostream>

bool prime(int num)
{
    for (int i = 2; i <= num/2; ++i)
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
    int sum = 1;
    for (int i = 1; i <= 2000000; i = i+2)
    {
        if (prime(i))
        {     
            sum+= i;
        }
    }
    std::cout << sum <<std::endl;
    return 0;
}
