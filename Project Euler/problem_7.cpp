/* 
By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.
What is the 10 001st prime number?
*/

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
    int count = 5;
    for (int i = 13; ; i = i+2)
    {
        if (prime(i))
        {
            count++;
        }
        if (count == 10001)
        {
            std::cout << i <<std::endl;
            return 0;
        }
    }
}
