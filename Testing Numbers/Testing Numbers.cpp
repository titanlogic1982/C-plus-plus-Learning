
#include <iostream>

// Function to check if a number is prime
bool isPrime(int number)
{
    // Numbers less than 2 are not prime
    if (number < 2)
        return false;

    // Check for divisors from 2 to number/2
    for (int i = 2; i <= number / 2; ++i)
    {
        // If a divisor is found, number is not prime
        if (number % i == 0)
            return false;
    }

    // Number is prime if no divisors are found
    return true;
}

int main()
{
    int countNumber = 2;

    while (true)
    {
        // Check if countNumber is prime using the isPrime() function
        if (isPrime(countNumber))
            std::cout << countNumber << " is a prime number\n";

        // Increment countNumber for the next iteration
        countNumber++;
    }

    return 0;
}