/*
If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6, and 9.
The sum of these multiples is 23.

Find the sum of all the multiples of 3 or 5 below 1000.
*/
#include <iostream>

using namespace std;

bool is_multiple(int n);

int main() {

    long total = 0;

    for(int i = 0; i < 1000; i++) // BELOW 1000
    {
        if(is_multiple(i))
        {
            total += i;
        }
    }

    cout << "total = " << total << '\n';

    return 0;
}

bool is_multiple(int n) {
    if(n % 3 == 0 || n % 5 == 0)
    {
        return true;
    }
    return false;
}