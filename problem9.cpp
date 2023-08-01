#include <iostream>
#include <cmath>
using namespace std;
// Find the only Pythagorean triplet (a, b, c), for which a + b + c = 1000.

int main()
{
    int a,b,csq,total=1000;
    
    for(a=1; a<total; a++){
        for(b=1; b<total/2; b++){
            csq = a*a + b*b;
            if(a + b + sqrt(csq) == total)
                goto theEnd;
        }
    }
    
    theEnd:
    int c = sqrt(csq);
    cout << " a: " << a << "\n b: " << b << "\n c: " << c << "\n mult: " << a*b*c;
    return 0;
}
