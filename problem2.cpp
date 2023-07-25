#include <iostream>
/* Find the sum of all the even-valued terms in the Fibonacci sequence
which do not exceed four million. */

int main()
{
    int a=1;
    int b=1;
    int c;
    int temp;
    int sum=0;

    while (c < 4000000)
    {
        temp = a;
        c = a + b;
        a = c;
        b = temp;

        if(c % 2 == 0)
            sum = sum + c;
    };
    
    std::cout << sum;
}
