/*
The prime factors of 13195 are 5,7, 13, and 29.
What is the largest prime factor of the number 600851475143?
*/

#include <iostream>
#include <list>
#include <cmath>

using namespace std;
bool is_prime(int n);

int main()
{
    // method: prime factorization by trial division

    long target = 600851475143;

    list<long> factors = {};

     do {
         for(long k = 2; k <= target; k++)
         {
            if(is_prime(k) && target % k == 0)
            {
                factors.push_back(k);
                target /= k;
                break;
            }
         }
     } while(target > 1);

    cout << "Prime Factors: ";
    for(int factor: factors)
    {
        cout << factor << ' ';
    }
    cout << '\n';
    return 0;
}

bool is_prime(int n)
{
    for(int i = 2; i * i < n; i++)
    {
        if(n % i == 0)
        {
            return false;
        }
    }
    return true;
}