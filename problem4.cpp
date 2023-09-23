/*
A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009.
Find the largest palindrome made from the product of two 3-digit numbers.
*/
#include<iostream>
#include<list>
#include<cmath>

using namespace std;

bool is_palindrome(int n);
int main()
{
    long max_palindrome = 0;
    for(int i = 100; i < 1000; i++)
    {
        for(int k = 100; k < 1000; k++)
        {
            long j = i * k;
            if(is_palindrome(j) && j > max_palindrome)
            {
                max_palindrome = j;
            }
        }
    }
    cout << "Max Palindrome = " << max_palindrome << '\n';
    return 0;
}

bool is_palindrome(int n)
{
    string str_n = to_string(n);
    int str_n_len = str_n.length();

    for(int i = 0; i < str_n_len; i++)
    {
        // cout << str_n.at(i) << " ?= " << str_n.at(str_n_len-1-i) << '\n';
        if(str_n[i] == str_n[str_n_len-1-i])
        {
            continue;
        } else
        {
            return false;
        }
    }

    return true;
}