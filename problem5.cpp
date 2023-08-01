#include <iostream>
#include <cmath>
#include <list>
using namespace std;
/* What is the smallest positive number that is evenly divisible 
by all of the numbers from 1 to 20? */

int multiplyBy(int number, list<int> &mylist){
    // Check if the number to multiply is equal to an exponential number.
    for(int i=1; i<10; i++){
        for(int k=2; k<10; k++){
            if(number == pow(i, k))
                return i; // if so, return the base to multiply.
        }
    }
    
    // Check if the number to multiply is divisible to any other prime numbers. (not prime).
    for (auto it = mylist.begin(); it != mylist.end(); ++it){
        if(number % *it == 0 && *it != 1)
            return 1; // if so, return 1 so that doesn't effect result.
    }
    return number; // return the number (prime number).
}

int main()
{
    list <int> mylist;
    int sum=1;

    for(int num=1; num<=20; num++){
        int a = multiplyBy(num, mylist);
        sum *= a;
        mylist.push_back(a);
        std::cout << "Multiply by: "<< a << " ....... Result: " << sum << "\n";
    }
    return 0;
}
