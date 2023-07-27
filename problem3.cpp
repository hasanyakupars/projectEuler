#include <iostream>
#include <list>
//What is the largest prime factor of the number 600851475143?

int main()
{
    std::list<int>primal;
    long long int number=600851475143;
    int i=2;

    // Finding primal factors.
    while(number != 1){ 
        if(number % i == 0){
            primal.push_back(i);
            number /= i;
        }   
        else
            i++;
    }

    int biggest=-1;
    for(auto it = primal.begin(); it != primal.end(); ++it){
        std::cout << *it << "\n";
        if(*it > biggest)
            biggest = *it;
    }

    std::cout << "\nThe biggest primal factor is: " << biggest;
    return 0;
}