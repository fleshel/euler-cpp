/*
The sum of the squares of the first ten natural numbers is,
	1^2 + 2^2 + ... + 10^2 = 385.
The square of the sum of the first ten natural numbers is,
	(1 + 2 + ... + 10)^2 = 55^2 = 3025.

Hence the difference between the sum of the squares of the first ten natural numbers and the square of the sum is
	3025 - 385 = 2640.

Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.
*/

#include<iostream>
#include<list>
#include<cmath>

using namespace std;

int sum_squares(int n);

int main()
{

	int sum_of_squares = 0;
	int sum_of_n = 0;
	for(int i = 0; i <= 100; i++)
	{
		sum_of_squares += (i * i);
		sum_of_n += i;
	}

	int squared_sum = sum_of_n * sum_of_n;

	cout << "sum_squares(100) = " << sum_of_squares << '\n';
	cout << "squares_sum(100) = " << squared_sum << '\n';

	cout << "difference = " << squared_sum - sum_of_squares << '\n';

	return 0;
}