/* 
Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.
*/

#include <iostream>


int main()
{
    int x;
    int y;
    for (int i = 1; i <= 100 ; i++)
    {
       x += i * i;
       y+=i;
    }
    y*=y;
    std::cout<<y-x;
    return 0;
}