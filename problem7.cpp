#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

bool isPrimal(int number){
    if(number % 2 == 0) // even numbers can't be primal.
        return 0;

    int temp = sqrt(number);    // square root of number rounded to the greatest integer.
    for(int i=3; i<=temp; i += 2){  // temp * temp <= number.
        if(number % i == 0)
            return 0;
    }
    return 1;
}

int main()
{
    vector<int> vector;
    int i=1, number;
    vector.push_back(2);    // already know 2 and 3 are primals.
    vector.push_back(3);

    while(vector.size() != 10001){
        number = 6*i - 1;   // all primal numbers are either 6n - 1 or 6n + 1.
        if(isPrimal(number))
            vector.push_back(number);

        number = 6*i + 1;
        if(isPrimal(number))
            vector.push_back(number);

        i++;
    } 
    cout << vector[10000];
//    int index = 0;
//    for(auto it = vector.begin(); it != vector.end(); it++)
//         cout << index++ << " - "<< *it << endl;
}