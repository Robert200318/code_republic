/* 
Each new term in the Fibonacci sequence is generated by adding the
previous two terms. By starting with 1 and 2, the first 10 terms will be:
1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ...
By considering the terms in the Fibonacci sequence whose values do not
exceed four million, find the sum of the even-valued terms.
*/

#include <iostream>

int main()
{
   
    int num_1 = 0;
    int num_2 = 1;
    int next = 0;
    int sum = 0;
    while(next < 4000000)
    {
        next = num_1 + num_2;
        num_1 = num_2;
        num_2 = next;
        if(num_2 % 2 == 0) { sum += num_2; }
    }  
    std::cout<<sum<<std::endl;
    return 0;
}