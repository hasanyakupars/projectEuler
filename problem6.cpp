#include <iostream>
#include <cmath>
/* Find the difference between the sum of the squares of the first 
one hundred natural numbers and the square of the sum.*/

int sumOfSquares (int number){
    return pow((number * (number + 1)) / 2, 2); 
}

int SquaresOfSum (int number){
    return (number * (number + 1) * (2 * number + 1)) / 6;
}

int difference(int number){
    return sumOfSquares(number) - SquaresOfSum(number);
}

int main()
{
    int n=100;
    std::cout << "Difference is: " << difference(n); 
    return 0;
}