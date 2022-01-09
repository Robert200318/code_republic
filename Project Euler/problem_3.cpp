/* 
The prime factors of 13195 are 5, 7, 13 and 29.
What is the largest prime factor of the number 600851475143 ?
*/
#include <iostream>

int main()
{
    long long i;
    long long n = 600851475143;

    for(i = 3; i <= n; i += 2) 
    {
        while(n % i == 0) 
        {
            n /= i;
        }

        if (n == 1) 
        {
            break;
        }
    }
    
    std::cout<<i<<std::endl;
    return 0;
}