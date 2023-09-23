/*
2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.
What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?
*/
#include<iostream>
#include<list>
#include<cmath>

using namespace std;
bool divides_evenly(int n);

int main()
{
    int counter = 1;

    while(!divides_evenly(counter))
    {
        counter += 1;
    }
    cout << "counter = " << counter << '\n';
    return 0;
}

bool divides_evenly(int n)
{
    for(int i = 1; i <= 20; i++)
    {
        if(n % i != 0)
        {
            return false;
        }
    }

    return true;
}