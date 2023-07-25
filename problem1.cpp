#include <iostream>
// Find the sum of all the multiples of 3 or 5 below 1000.

int sumOfMultiples(int number){
    int sum=0;
    for(int i = 0; i < number; i++){
        if(i % 3 == 0 || i % 5 == 0)
            sum += i;
    }
    return sum;
}

int main()
{
    std::cout << sumOfMultiples(1000);
    return 0;
}
