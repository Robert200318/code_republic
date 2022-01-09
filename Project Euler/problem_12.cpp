/* 
What is the value of the first triangle number to have over five hundred divisors?
*/

#include <iostream>


int main()
{
    int factors = 0;
        for (int i = 0; ; i++)
        {
            factors = 0;
            for (int j = 0; j<=i ; j++)
		    {
                std::cout<< i <<std::endl;
                 if(i % j == 0)
                {
                    factors++;
                }
                if(factors == 500)
                {
                    std::cout<< i <<std::endl;
                    break;
                }
            }
            if(factors == 500)
            {
                break;
            }
        }
        return 0;
}