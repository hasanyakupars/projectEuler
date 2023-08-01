#include <iostream>
#include <string>
using namespace std;
// Find the largest palindrome made from the product of two 3-digit numbers.

bool isPalindrome(int number){
    string str = to_string(number);     // convert integer to string.
    string reversed = str;      // create a string that has same length with number.
    int x = 0;
    
    for(int i = str.size() - 1; i >= 0; i--, x++)      // put in reversed number.
        reversed[x] = str[i];
    
    if(str == reversed)     // check if the actual number equals to reversed.
        return 1;
    else
        return 0;
}

int main()
{
    /* Largest palindrome number must've start with 9, so it should've end with 9.
    To get largest numbers, numbers that multiply by must've start with 9**.
    To get 9 in the last digit, we must multiply 1 by 9 or 3 by 3, there's no other way.
    ***********   So, numbers are (9k9 * 9i9) or (9k3 * 9k3).   ***********/
    int result;
    for(int i = 0; i < 10; i++)
    {
        for(int k = 0; k < 10; k++)
        {
            result = (909 + (k*10)) * (901 + (i*10));
            if(isPalindrome(result))
                cout << 909 + (k*10) << " * " << 901 + (i*10) << " = " << result << endl;
            
            result = (903 + (k*10)) * (903 + (i*10));
            if(isPalindrome(result))
                cout << 903 + (k*10) << " * " << 903 + (i*10) << " = " << result << endl;
        }
    }
}