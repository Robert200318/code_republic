/* 
A palindromic number reads the same both ways.
The largest palindrome made from the product of two 2-digitnumbers is 9009 = 91 × 99.
Find the largest palindrome made from the product of two 3-digit numbers.
*/

#include <iostream>
bool palindrom(int x)
{ 
    int tmp = x;
    int reverse;
    while (x != 0)
    {
        reverse = (reverse * 10) + (x % 10);
        x /= 10;   
    }
    if( tmp == reverse)
    {
        return true;
    }
    return false;
}
int main()
{
    int a[999*999] = {0};
    int thiss;
    for(int i = 100; i<1000; i++)
    {
        for(int j=100; j<1000; j++)
        {
            if( a[i*j] == 0 )
            {
                if(palindrom(i*j))
                {
                    thiss = i*j;
                }
                else
                {
                    a[i*j]=1;
                }
            }
        }
    }

    std::cout<< thiss;
    return 0;
}