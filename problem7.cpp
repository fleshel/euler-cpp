/*
By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13,
we can see that the 6th prime is 13.

What is the 10001st prime number?
*/

#include<iostream>
#include<list>
#include<cmath>

using namespace std;
bool is_prime(int n);

int main()
{
    int counter = 1;
    int i = 2;
    while(counter <= 10001)
    {
        if(is_prime(i))
        {
            cout << "prime[" << counter << "]= " << i << "\n";
            counter += 1;
        }
        i+=1;
    }

    cout << "counter= " << counter << ", i=" << i << '\n';

    return 0;
}

bool is_prime(int n)
{
    for(int i = 2; i * i <= n; i++)
    {
        if(n % i == 0)
        {
            return false;
        }
    }
    return true;
}