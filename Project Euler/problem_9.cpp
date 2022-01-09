#include <iostream>

int main() {
    int count = 0;
    do {

        int a = 1;
        int b = 2;
        int c = 3;
        int arjeq;

        for (a=1;a<b;a++) {
            for (b=2 ; b<c; b++) {
                for (c=3; c<=1000; c++) {
                    arjeq = a+b+c;
                    if (arjeq == 1000 && a*a + b*b == c*c) {
                        std::cout << a << ", " << b << ", " << c <<std::endl;

                    }
                }
            }
        }
        count++;
    } while(count < 1000);  
    return 0;
}