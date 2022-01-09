/* 
Work out the first ten digits of the sum of the following one-hundred 50-digit numbers.
*/

#include <iostream>

#include <fstream>

int main(void) {
    int sum = 0;
    char num;
    std::ifstream txt("problem_13.txt");

    while (txt >> num) {
        sum +=  num - '0';
    }
    txt.close();
    std::cout << sum << std::endl;
    return 0;
}