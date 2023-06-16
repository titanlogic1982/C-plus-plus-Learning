
#include "Testing Numbers.h"
#include <iostream>
using namespace std;
// Simple program to count and check for prime numbers.
int main()
{
	bool running = true;
	int countNumber{};
	int i;
	bool is_prime = true;
	while (running)
	{

		// 0 and 1 are not prime numbers
		if (countNumber == 0 || countNumber == 1)
		{
			is_prime = false;
		}

		// loop to check if countNumber is prime
		for (i = 2; i <= countNumber / 2; ++i)
		{
			if (countNumber % i == 0) {
				is_prime = false;
			}
		}

		if (is_prime)
		{
			cout << countNumber << " is a prime number";
			

		}
		is_prime = true;
		countNumber++;
	}
	return 0;
}
